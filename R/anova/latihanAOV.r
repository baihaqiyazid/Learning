#--------------NO 1-------------------------
a = c(17.5, 16.9, 15.8, 18.6)
b = c(16.4, 19.2, 17.7, 15.4)
c = c(20.3, 15.7, 17.8, 18.9)
d = c(14.6, 16.7, 20.8, 18.9)
e = c(17.5, 19.2, 16.5, 20.5)
f = c(18.3, 16.2, 17.5, 20.1)

grup = data.frame(cbind(a,b,c,d,e,f))
sGrup = stack(grup)
sGrup

#h0 = rata2 sama
#h1 = ada sepasang jenis mesin yg tidak sama

shapiro.test(sGrup$values) #data normal

#h0=varian sama, h1=varian beda
bartlett.test(values~ind, data = sGrup) #varian sama

anova = aov(values~ind, data = sGrup)
summary.aov(anova)
#gagal tolak h0 = rata2 sama

TukeyHSD(anova)

#--------------NO 2-------------------------
data2=data.frame(NULL)
fix(data2)
data2

#uji asumsi normal
shapiro.test(data2$nilai[data2$dosen=="A"])
shapiro.test(data2$nilai[data2$dosen=="B"])
shapiro.test(data2$nilai[data2$dosen=="C"])

#uji asumsi varians sama
bartlett.test(nilai~dosen,data=data2)

#anova
Ho: MUa=Mub=MUc
H1: minimal ada sepasang dosen yg rata2 nilainy berbeda
anova_nomor2=aov(nilai~dosen,data=data2)
summary(anova_nomor2)
#pvalue>0.05=> keputusan: gagal tolak Ho
#kesimpulan: tidak ada perbedaan rata-rata nilai dari ketiga dosen.
summary.aov(anova_nomor2)

#--------------NO 3-------------------------
data = c(78,57,69,71,
         62,49,78,66,
         71,62,72,59,
         77,60,83,67)
sekretaris = c("Kim", "Doug", "Ronda","Kevin")

df = data.frame(sekretaris, data, 
                merk = rep(c("Royal", "IBM", "Underwood", "Olivetti"),each = 4))
df

#Berdistribusi normal
shapiro.test(df$data[df$merk=="Royal"]) #taraf > 5% = berdistribusi normal
shapiro.test(df$data[df$merk=="IBM"])
shapiro.test(df$data[df$merk=="Underwood"])
shapiro.test(df$data[df$merk=="Olivetti"])

# varians antar kelompok sama
#Ho: varians semua kelompok sama
#H1: minimal ada sepasang kelompok yang variansnya berbeda
bartlett.test(data~merk,data=df)
#p-value> 0.05=> keputusan: gagal tolak Ho
# kesimpulan:varians kelompok sama.

#Uji ANOVA tanpa interaksi

#1. Uji Hipotesis kecepatan sekretaris
#Ho: MUc=MUh=...=MUsf
#H1: minimal ada sepasang sekretaris yg tidak sama

#2. Uji Hipotesis kecepatan mesin
#Ho: MU berpengaruh
#H1: Jenis mesin ketik tidak berpengaruh pada kecepatan mengetik
anovaplus=aov(data~merk+sekretaris, data=df)
summary(anovaplus)

#Kesimpulan
#1. Kecepatan mengetik sekretaris sama
#2. jenis mesin ketik tidak berpengaruh pada kecepatan mengetik
