#include <iostream>

int kare_al(int *x)
{
    return (*x) * (*x);
}

class Base
    {
    public:
        virtual void print()
        {
            std::cout << "This is Base class" << std::endl;
        }
    };
class Derived : public Base
    {
    public:
        void print()
        {
            std::cout << "This is Derived class" << std::endl;
        }
    };

int main()
{

    // ÜSTÜ KAPALI-IMPLICIT VERI DONUSTURME
    float a = 24.241;
    int a1 = 3;
    std::cout << a1 << std::endl; // 3
    a1 = a;
    std::cout << a1 << std::endl; // 24

    std::cout << std::endl;
    //AÇIK - EXPLICIT VERİ TURU TONUSTURME - TYPE CASTING

    //1: () ile 
    //(veri türü)ifade;
    double b = 214.42;
    int id = (int)b;
    std::cout << id << std::endl; // 214

    std::cout << std::endl;
    //2: veti türünü fonk. adı gibi kullanıp dönüştürme
    // veri-türü(ifade)
    double c = 42.5;
    int c2 = int(c) + int(c);
    std::cout << c2 << std::endl; // 84
    

    std::cout << std::endl;
    //3: veri türü değiştirme işlemcileri ile veri türü değiştirme

    //a- const_cast 
    //işlem yapılan nesnenin sabit ve/veya volatile özelliğini kaldırır veya yeniden kazandırır
    //const özelliği kaldırma, o nesnenin bellekteki değerini değiştirmeden sadece const olmayan bir değer kabul edilen bir ifade veya fonksiyon parametresinde kullanılmasını sağlar
    //sadece pointer veya referanslarda kullanılır
    //sadece aynı veri türleri ile kullanılabilir

    //const_cast<veri_türü>(ifade)
    const int id1 = 21;
    //const cast kullanılmadan bu fonksiyona parametre olarak gönderilemez.
    int *p = const_cast<int*>(&id1);
    std::cout << "fonk ciktisi: " << kare_al(p) << std::endl; // 441

    //b- dynamic_cast
    //dynamic_cast<veri_türü>(ifade)
    //dynamic_cast işlemicisi, bir veri türündeki işaretçinin diğer bir veri türüne,bir veri türündeki referansın da veri türüne çevrilmesini sağlar
    //esas amaç,bir ana sınıf ve bu sınıftan türetilmiş sınıflardan oluşan herhangi bir nesnenin adresini gösterebileceğinden, dynamic_cast işlemcisi türetilmiş sınıf işaretcisini ana sınıf işaretçisine dönüştürebilir.Ancak dynamic_cast işlemcisi,sadece gösterilen nesne bir türetilmiş sınıf nesnesi ise , bir ana sınıf işaretçisinin türetilmiş sınıf işaretçesine dönüştürebilir.
    // Dönüştürülecek olan işaretçi veya referans, hedef veri türünden bir nesne veya hedef veri türünden türetilen bir nesne ise dynamic_cast başarıyla sonuçlanır.
    // Dönüştürme başarısız olduğunda işlem işaretçi ile yapılıyorsa NULL, referans ile yapılıyorsa bad_cast hata sonucu elde edilir
    //type dynamic_cast example
    
    Base *bptr, b_ob;
    Derived *dptr, d_ob;
    bptr = &d_ob;
    dptr = dynamic_cast<Derived *>(bptr);
    if (dptr == NULL)
        std::cout << "Null pointer on first type-cast." << std::endl;
    else
        std::cout << "Non-null pointer on first type-cast." << std::endl;
    bptr = &b_ob;
    dptr = dynamic_cast<Derived *>(bptr);
    if (dptr == NULL)
        std::cout << "Null pointer on second type-cast." << std::endl;
    else
        std::cout << "Non-null pointer on second type-cast." << std::endl;
    

    std::cout << std::endl;
    //c-reinterpret_cast
    //reinterpret_cast<veri_türü>(ifade)
    //bir veri türünü tamamen farklı bir veri türüne dönüştürür.
    //reinterpret_cast operatörü yalnızca işaretçiler veya tamsayılar arasında dönüştürmek için kullanılabilir.
    double x_ = 43.2;
    double *x1 = &x_;
    double *s = reinterpret_cast<double*>(x1);
    std::cout << *s << std::endl;

    int sefa = 4;
    int *p_sefa = &sefa;
    int last = reinterpret_cast<int>(*p_sefa);
    std::cout << last << std::endl;


    std::cout << std::endl;
    //d-static_cast
    //static_cast<veri_türü>(ifade)
    //normal geçici veri türü dönüştürme işlemcisi yerine kullanılan bir işlemci olup herhangi bir standart veri türü dönüştürme işlemi için yapılabilir.

    double s1 = 4.23;
    double s2 = 453.234;

    double s3 = (int)s1 + s2;
    std::cout << s3 << std::endl;
    double s4 = static_cast<int>(s1) + s2;
    std::cout << s4 << std::endl;
}