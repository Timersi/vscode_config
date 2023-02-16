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

// void stringcpy(string str1,const string str2)//实验失败，c++重写
// {
//     int i = -1;
//     string * up1,up2;

//     while (str1[++i] = str2[i])
//     {
//         /* code */;
//     }
// }

// int main ()
// {
//     string arv = "hello";
//     string arr = "he";
//     //stringcpy(arv,arv) ;
//     cout << "len : "<<stringlen(arv)<<"  "<< arv <<endl;
//    // cout << " arv: " <<arv <<" cpy: " << arr << endl;

//     system("pause");
    
//     return 0;
// }
