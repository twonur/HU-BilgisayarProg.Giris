# 📝 Final Sınavı Hazırlık Soruları

Bu dosya, **Hacettepe Üniversitesi İstatistik Bölümü** - Bilgisayar Programlamaya Giriş (C Dili) dersi final sınavı hazırlık sorularını ve çözümlerini içermektedir.

---

### $\color{red}\text{SORU - 1}$
Klavyeden girilen bir `n` tam sayısına göre aşağıdaki toplamı yapan ve örnek çıktıdaki gibi gosteren kodu yazin.

**Formül:**
$$1 + \frac{2}{3} + \frac{3}{4} + \dots + \frac{n}{n+1} = \\#.\\#\\#\\#$$

* **Örnek Çıktı :**
* ```
  n = 3
  1 + 2/3 + 3/4 = 2.417
👉 [**Çözüm Kodu: soru1.c**](./soru1.c)

---

### $\color{red}\text{SORU - 2}$
Bu kodun ciktisi nedir? Eger hata veriyorsa nedeni nedir?

```
int main(){
    int i, j, z;
    int a[] = {8, 2, 9, 6};

    for(i = 0; i < 4; i++) {
        z = 0;
        for(j = i + 1; j < 4; j++) {
            if(a[j] < a[i])
                z += 1;
        }
        printf("%d ", z);
    }
}
```
**Cevap**: Hatalı değildir, çıktısı 2 0 1 0 olur.

👉 [**Çözüm Kodu: soru2.c**](./soru2.c)

---

### $\color{red}\text{SORU - 3}$
> [!NOTE]
> Bu sorudaki şıklar tamamen kendi türetmemdir.

Mantık sorularını ve Matematik işlemleri C diline göre cevaplayınız.
Matematiksel olarak `true` 1, `false` ise 0 olarak kabul edilir.

**Değişkenler:**
* `int b = 1, s = 3, d = 5;`
* `float t = 5.0, k = 2.0;`

| Şık | Önerme | Sonuç |
| :---: | :--- | :---: |
| **a)** | `(int)t / (int)k + (d > s)` | **3** |
| **b)** | `(d % s) && (s > b)` | **1** |
| **c)** | `(d % s) * 5` | **10** |
| **d)** | `(b + s) > d` | **0** |
| **f)** | `++a && b--` | **1** |

---

### $\color{red}\text{SORU - 4}$
Aşağıdaki tablo otopark saatlik ücretlerini gösteriyor. Kullanıcıdan alınan `float` tipi bir zaman ile kullanıcıya kaç TL ödemesi gerektiğini gösteren kodu yazın.

| Kalış Süresi | Ücret (TL) |
| :--- | :--- |
| 0 - 30 Dakika | 0 TL |
| 30 Dakika - 2 Saat | 160 TL |
| 2 - 4 Saat | 250 TL |
| 4 - 8 Saat | 400 TL |
| 8 - 12 Saat | 600 TL |

**Örnek Çıktılar:**
* `sure = 2.5` $\rightarrow$ **Ucret 250TL**
* `sure = 0.5` $\rightarrow$ **Ucret 0TL**
* `sure = 0.8` $\rightarrow$ **Ucret 160TL**

👉 [**Çözüm Kodu: soru4.c**](./soru4.c)

---
[⬅ Ana Sayfaya Dön](../README.md)
