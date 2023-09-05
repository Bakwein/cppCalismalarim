#include <iostream>
#include <string>

/*
C++ programlama dilinde, "static sınıf" (static class) ifadesi, sınıfın tüm üyelerinin statik (static) olduğu ve bu sınıftan nesne oluşturulamayacağı bir tür sınıf türüdür. Bu tür bir sınıf, özellikle yardımcı sınıflar veya araç sınıfları oluşturmak için kullanışlıdır, çünkü bu sınıfların nesnelerine ihtiyaç duyulmaz.
*/
class StaticMath {
public:
    // Bu sınıftan nesne oluşturulamaz
    // Tüm üyeleri static olarak tanımlanmıştır.
    
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    int result1 = StaticMath::add(5, 3); // 8
    int result2 = StaticMath::subtract(10, 4); // 6

    std::cout << "res1: "<<  result1 << std::endl;
    std::cout << "res2: "<<  result2 << std::endl;
    
    // StaticMath sınıfından nesne oluşturamayız:
    // StaticMath math; // Hata! Nesne oluşturulamaz
    
    return 0;
}
