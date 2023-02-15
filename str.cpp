#include"str.h"

int stringlen(string str)
{
    int i =0;
    
    while(str[i])
    {
        ++i;
    }
    return i;
}

void stringcpy(string str1,const string str2)
{
    int i = -1;
    string * up1,up2;
    str1=&up1;
    &str2=up2;
    while (up1[++i] = up2[i])
    {
        /* code */;
    }
}

int main ()
{
    string arv = "hello";
    string arr = "he";
    stringcpy(arv,arv) ;
    cout << "len : "<<stringlen(arv)<<"  "<< arv <<endl;
    cout << " arv: " <<arv <<" cpy: " << arr << endl;

    system("pause");
    
    return 0;
}
