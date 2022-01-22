summary(chickwts)
# apakah pemberikan jenis makanan berbeda
# memberikan perbedaan pada rata-rata berat ayam

#Ho: MUc=MUh=...=MUsf
#H1: minimal ada sepasang jenis makan yang tidak sama efeknya

#data berdistribusi normal
shapiro.test(chickwts$weight[chickwts$feed=="casein"]) #taraf > 5% = berdistribusi normal

# varians antar kelompok sama
#Ho: varians semua kelompok sama
#H1: minimal ada sepasang kelompok yang variansnya berbeda
bartlett.test(weight~feed,data=chickwts)
#p-value> 0.05=> keputusan: gagal tolak Ho
# kesimpulan:varians kelompok sama.

#buat anova
anova=aov(weight~feed,data=chickwts)
summary.aov(anova)
#pvalue <  0.05=> keputusan:tolak Ho
#kesimpulan: dg tk kesalahan 5%, jenis makanan ayam berbeda
#akan memberikan efek berbeda pada berat ayam.

# pasangan jenis makanan apa yang memberi efek berbeda???
#Uji Tukey
#Ho: MUi=MUj
#H1:MUi tidak= MUj

TukeyHSD(anova)

#Latihan Nomor 1
data1=data.frame(NULL)
fix(data1)
data1


#Latihan Nomor2
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

#ANOVA 2 arah 
dim(chickwts)
chickwts_new=chickwts[1:64,]
chickwts_new$tipe=rep(c("kampung","negri"),each=32)
head(chickwts_new)
table(chickwts_new$feed,chickwts_new$tipe)

#Hipotesis berkaitan dg jenis makanan
Ho:MUc=MUh=...=MUsf
H1: minimal ada sepasang MUi tidak = MUj

#Hipotesis berkaitan dg jenis ayam
Ho:MUk=MUbk
H1:MUktidak =MUbk

anova2=aov(weight~feed+tipe, data=chickwts_new)
summary(anova2)
#uji hipotesis berkaitan dg jenis makanan
pvalue< 5persen=> tolak Ho
kesimpulan: pemeberian jenis makan berebeda memberikan efek berbeda pada berat ayam
#uji hipotesis berkaitan dg jenis ayam
pvlue< 5persen=> tolakHo
kesimpulan: tipe ayam yang berbeda memiliki rata-rata berat yang berbeda.

#ANOVA 2 arah dengan interaksi
anova2_int=aov(weight~feed*tipe, data=chickwts_new)
summary(anova2_int)
