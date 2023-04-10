#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    int ilk,son;
    std::cout << "ilk sayiyi giriniz: ";
    std::cin >> ilk;
    // BURADA ASLKDMAKLSDH GİRSEK ALTTAKİNDE GİRİŞ İSTEMEZ DİREKT COUT'LARI BASAR SON GARGABE VALUE OLUR
    std::cout << "diger sayiyi giriniz: ";
    std::cin >> son;
    // SONA SH GİBİ RANDOM KARAKTERLER GİRSEM DE BENİM CİKTİM SH OLUYOR?
    /*
    Bu, C++'ın "input buffer" özelliğiyle ilgilidir. std::cin, kullanıcıdan girdi almak için beklerken, klavyeden girilen herhangi bir karakteri "input buffer" adı verilen geçici bir bellekte tutar. Bu "input buffer" içeriği, beklenen veri türüyle uyumlu olan ilk veri girildiğinde işlenir ve geri kalanı yoksayılır.
    Örneğin, siz bir tamsayı (integer) girmediğiniz halde, std::cin beklenen veri türü olarak bir tamsayı belirttiğiniz için, std::cin girdiğiniz karakterleri "input buffer"da tutacaktır. Ardından, bu karakterler işlenmeden önce, siz bir std::cout ifadesiyle aynı değişkeni ekrana yazdırdığınızda, "input buffer"daki karakterler yerine değişken içindeki eski değer yazdırılır.
    Bu nedenle, C++'da std::cin ile beklenen veri türüne uygun olmayan bir girdi yaparsanız, programınız hata vermeden devam edecektir. Bununla birlikte, bu davranış beklenmeyen hatalara ve veri türü dönüşümleri nedeniyle programınızda tutarsızlıklara neden olabilir. Bu nedenle, kullanıcıdan veri girdiği zaman, girdiğinin uygun olduğundan emin olmak için hata kontrolü yapmanız gerekmektedir.
    */

    std::cout << "Girdiginiz ilk sayi -> " << ilk << std::endl;
    std::cout << "Girdiginiz diger sayi -> " << son << std::endl;
    std::cout << "Girdiginiz sayilarin toplami ->" << ilk+son << std::endl;
    std::cout << "Girdiginiz sayilarin farki->" << ilk-son << std::endl;
    std::cout << "Girdiginiz sayilarin carpimi->" << ilk*son << std::endl;
    std::cout << "Girdiginiz sayilarin bolumu->" << ilk/son << std::endl;
    std::cout << "Girdiginiz sayilarin modu->" << ilk%son << std::endl;
}