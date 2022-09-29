//載入輸入輸出
#include<iostream>

//使用名稱空間(記憶先分一塊位置出來做暫存用)
using namespace std;

//主程式
int main(){
    /*變數記憶體位址-取址運算子&
      &變數名稱
    */
    int n1=100;
    char n2[2]="a";
    double a=5.3;
    cout<<"變數名稱\t值\t記憶體位址"<<endl;
    cout<<"===================================="<<endl;
    cout<<"n1\t\t"<<n1<<"\t"<<&n1<<endl; 
    cout<<"n2\t\t"<<n2<<"\t"<<&n2<<endl;
    cout<<"a\t\t"<<a<<"\t"<<&a<<endl;
    
    /*指標-用來儲存記憶體位址的變數
    資料型態* 指標變數名稱;
    資料型態 *指標變數名稱;
    
    指定指標變數內容 
    *指標變數名稱=變數名稱;
     指標變數名稱=&變數名稱;
     
    指標變數運算
    指標變數名稱++;
    指標變數名稱+=N; 
    */ 
    
    int* n3;
    int *n4=&n1;
    n3=&n1;//指定內容為記憶體位址 
    double *n5=&a;
    
    cout<<"變數名稱\t值\t\t指向值\t本身記憶體位址"<<endl;
    cout<<"n3\t\t"<<n3<<"\t"<<*n3<<"\t"<<&n3<<endl; 
    cout<<"n4\t\t"<<n4<<"\t"<<*n4<<"\t"<<&n4<<endl; 
    cout<<"n5\t\t"<<n5<<"\t"<<*n5<<"\t"<<&n5<<endl; 
    *n5=7.2;//更改原始內容值 
    cout<<"n5\t\t"<<n5<<"\t"<<*n5<<"\t"<<&n5<<endl; 
    cout<<"a="<<a<<endl;
    
    n3++;
    cout<<"變數名稱\t值\t\t指向值\t本身記憶體位址\t大小"<<endl;
    cout<<"n3\t\t"<<n3<<"\t"<<*n3<<"\t"<<&n3<<"\t"<<sizeof(n3)<<endl; 
    n3--;
    cout<<"n3\t\t"<<n3<<"\t"<<*n3<<"\t"<<&n3<<"\t"<<sizeof(n3)<<endl;  
    n3+=3;
    cout<<"n3\t\t"<<n3<<"\t"<<*n3<<"\t"<<&n3<<"\t"<<sizeof(n3)<<endl; 
    n3-=3;
    cout<<"n3\t\t"<<n3<<"\t"<<*n3<<"\t"<<&n3<<"\t"<<sizeof(n3)<<endl; 
    
    /*參考型態 &-設定同一個物件不同名稱
    資料型態& 變數名稱=變數名稱; 
    */
    int& x=n1;
    int &y=n1;
    cout<<"變數名稱\t值\t記憶體位址"<<endl;
    cout<<"===================================="<<endl;
    cout<<"n1\t\t"<<n1<<"\t"<<&n1<<endl; 
    cout<<"x\t\t"<<x<<"\t"<<&x<<endl; 
    cout<<"y\t\t"<<y<<"\t"<<&y<<endl; 
    //system("pause");//暫停
    return 0;//結束
}
