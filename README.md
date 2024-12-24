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
