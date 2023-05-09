#include <iostream>
using namespace std;
/*
public->taban sınıftaki public değişkenler ve methodlar türemiş sınıflar, main ve diğer fonksiyonlar tarafından erişilebilirler
protected-> taban sınıfındanki proteceted değişkenler ve methodlar sadece türetilmiş sınıflar tarafından erişilebilirler.
private ->  o taban sınıf harici her yerde erişim olamaz.
*/
class insan
{
    protected:
        string tc;
        string isim;
        string soyisim;
    public:
        insan(string tc="",string isim="",string soyisim=""):tc(tc),isim(isim),soyisim(soyisim){}
        string getTc(){return tc;}
        string getIsim(){return isim;}
        string getSoyisim(){return soyisim;}
        void setTc(string tc){this->tc=tc;}
        void setIsim(string isim){this->isim=isim;}
        void setSoyisim(string soyisim){this->soyisim=soyisim;}
};

class ogrenci:public insan
{
    private:
        string ogrNo;
    public:
        ogrenci(string ogrNo="",string tc="",string isim="",string soyisim=""):ogrNo(ogrNo),insan(tc,isim,soyisim){}
        string getogrNo(){return ogrNo;}
        void setogrNo(string ogrNo){this->ogrNo=ogrNo;}
};

int main()
{
    insan i1("123445678910","Sefa","Tunca");
    cout << i1.getIsim() << " " << i1.getSoyisim() << " " << i1.getTc() << endl;
    ogrenci ogr("220202101","12345678810","Ali","Demir");
    cout << ogr.getogrNo() << " " << ogr.getTc() << " " << ogr.getIsim() << " " << ogr.getSoyisim() << " " << endl;
    

}