pd= data.frame(dataLM)
pd
ipm = pd$IPM
persen_bkj = pd$persen_bekerja
pert_ekonom = pd$pert.ekonomi
kemiskinan = pd$kemiskinan
kabupaten = pd$Kabupaten..Kota
no = pd$No

#hitung korelasi
#h0 = korelasi tidak signif
#h1 = korelasi signif
cor(pd[3:6])
cor.test(kemiskinan, ipm) #signif (0,00000000003)
cor.test(kemiskinan, persen_bkj ) #signif (0,0000000002)
cor.test(kemiskinan, pert_ekonom ) #signif (0,0000000001)

library(corrplot)
corrplot(cor(pd[3:6]))

#regreseiLinear
#h0 : data ipm, persen_bkj, pert_ekonom tidak berpengaruh thd data kemisikinan
#h1 : data ipm, persen_bkj, pert_ekonom berpengaruh thd data kemisikinan

rlb = lm(kemiskinan~ipm+persen_bkj+pert_ekonom)
summary(rlb)

pred.kemiskinan = 51.75393+(-0.2777)*70 + (-0.05885)*70 + (-3.22265)*7
pred.kemiskinan

#interpretasi
#Intercept = jika data kemiskinan tidak memilki tambahan dari
#            ipm, pesesn_bkj, pert_ekonom maka data kemisikinan mencapai 52%
#Slope ipm = jika data pada ipm naik 1 kesatuan ipm, maka data kemiskinan
#            turun sebesar 0.3%
#Slope persen_bkj  = jika pada data pesen_bkj naik 1%, maka data kemiskinan
#                    turun sebesar 0.06%
#Slope pert_ekonom = jika pada data pert_ekonom naik 1%, maka data kemiskinan
#                    turun sebesar 3.22%

