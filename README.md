# LDR-Alarm-Sistemi

# Projenin Amacı ve Çalışma Mantığı:

LDR kullanan lazer alarm sistemi projesinin amacı, belirlenen bir alana izinsiz girişleri tespit etmek ve bu durumu bir alarmla bildirmektir.

LDR, lazer ışığını sürekli olarak algılar. Eğer birisi lazer ışığını keserse (*yani alana girerse*), LDR'nin direnci değişir ve bu durum devreye sinyal gönderir. Bu sinyal sonucu da alarm (*sesli, ışıklı veya başka bir uyarı*) tetiklenir.

**Özetle:** Bu proje, bir güvenlik sistemi gibi çalışır. Belirlenen bir alanı korur ve izinsiz girişleri tespit ederek alarm verir. 

# Projenin Kullanılabileceği Bazı Alanlar:

* **Ev güvenliği:** Pencere veya kapıların önüne yerleştirilerek izinsiz girişlere karşı alarm verebilir.
* **Müze veya sergi alanları:** Değerli eşyaların bulunduğu vitrinlerin önüne yerleştirilerek koruma sağlayabilir.
* **Endüstriyel alanlar:** Tehlikeli bölgelerde izinsiz girişleri engelleyebilir.

# Projede Karşılaşılan Zorluklar:

* **Malzeme kalite kontrolü:** Malzeme alındığında LDR'nin proje ile uyumlu olup olmadığını kontrol etmek gerekti. LDR'nin algılama eşiği ile lazerin dalga boyu uyumuna dikkat etmek gerekiyordu. 
* **Kodların proje ile uyumu:** Kodları güncellemek gerekti. 

# Bulduğumuz Çözümler:

LDR ilk başta algılamadı ve devre istediğimiz gibi çalışmadı. Önce LDR'yi  avometre ile üzerinden geçen akım ve gerilim değerlerini okumaya çalıştık. Değerleri görmeye başladığımızda LDR'nin çalıştığını anladık ve devre bağlantılarını kontrol ettik. Şemaya uygun bir şekilde bağlantıları baştan yaptık. 

```c
if (ldrVal > 50) {     //ldr degeri 300 kucukse yesil led acik kirmizi led kapali olacak
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    } 

```
Satır 19'daki for döngüsüne girdiğimiz ldrVal değerini LDR'nin algılayacağı şekilde arttırıp azalttık. Bizim kullandığımız LDR 50 değerini girdiğimizde çalıştı. for döngüsü içerisindeki büyük simgesi duruma göre küçüktür ile değiştirilerek çalışması kontrol edilebilir.

# Projenin Proteus Şeması:

![Ekran görüntüsü 2024-12-25 121514](https://github.com/user-attachments/assets/ac455e87-7bfc-48fa-9e4c-b5a2da112b6b)

# Devre Lazer ile Tamamlandığında:

![image](https://github.com/user-attachments/assets/9f217861-9ce8-4fef-94ac-b4824ae28cad)

# Lazerin Önü Kesildiğinde:

![image](https://github.com/user-attachments/assets/9a3c9940-ad42-4cc4-98a4-98cc83864a08)




