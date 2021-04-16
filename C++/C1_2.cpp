//載入輸入輸出
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdlib>
#include<ctime>
//使用名稱空間(記憶先分一塊位置出來做暫存用)
using namespace std;

//主程式
int main(){
    //選擇第1題 
    int a[5][2]={};
    int count=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            cout<<"第"<<count<<"筆,a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
            count++;
        }
    }
    //選擇第2題 
    int b[6];
    cout<<"陣列佔記憶體大小"<<sizeof(b)<<endl;
    //選擇第3題 
    int c[100]={0};
    cout<<c[100]<<endl;
    //選擇第4題 
    int d[10]={1,2,3,4,5,6,7,8,9,0},d2,d3=0;
    d2=d[d3+2]+d[d[d3]];
    cout<<d2<<endl;
    //選擇第5題-10次
    
    //選擇第6題 
    int e[6];
    e[0]=5;
    for(int i=1;i<6;i++){
        e[i]=i*i+5;
        if(i>2) e[i]=e[i]-e[i-1];
    }
    cout<<e[3]<<endl;
    
    //選擇第7題-D
    
    
    /*選擇第8題-陣列內容為  
      1  2  3  0
      5  6  0  0
      9  0  0  0    
      答案為6 
    */  
    
    //選擇第9題
    int arr[10] ,sum=0;
    for(int i=0;i<10;i++ )
        arr[i]=i;
    for(int i=1;i<9;i++){ 
        sum=sum-arr[i-1]+arr[i]+arr[i+1];
        if(i<8)
            cout<<sum<<"-"<<arr[i-1]<<"+"<<arr[i]<<"+"<<arr[i+1]<<endl;
        else
            cout<<sum<<endl;
    } 
    //選擇第10題
    int f[10]={1,3,9,2,5,8,4,9,6,7},index=0;
    for(int i=1;i<=9;i++){  
        if(f[i]>=f[index])
            index=i;
        cout<<"i="<<i<<",index="<<index<<endl;
    }
    
    //實作題1
    int all;//全班人數
    int n;//實到人數
    int s;//已到座號
    int myclass[51]={};//座位數 
    cout<<"請輸入全班人數、實到人數、已到座號:";
    cin>>all>>n;
    for(int i=1;i<=n;i++) {
        cin>>s;
        myclass[s]=1;
    }
    cout<<"缺席人員:";
    for(int i=1;i<=all;i++) {
        if(myclass[i]!=1)
            cout<<i<<" "; 
    }
    cout<<endl;
    
    //實作題2
    int num;//輸入數字
    int arr1[8]={};//起始值為0
    ex:
    cout<<"請輸入數字:" ;
    cin>>num;
    if(num>=0 && num<=255) {
        for(int i=0;i<8;i++){
            arr1[i]=num%2;
            num/=2;
        }
    }else{
        cout<<"輸入的數字超過255,請重新輸入"<<endl;
        goto ex; 
    }
    reverse(arr1,arr1+8);//反轉
    for(int i=0;i<8;i++){
        cout<<setw(4)<<arr1[i];
    }
    cout<<endl;
    
    //實作題3 
    int x;//暫存亂數產生值
    int arr2[6];
    char cho;
    menu:
    srand(time(NULL));
    for(int i=0;i<6;i++){
        x=rand()%49+1;
        for(int j=0;j<6;j++){
            if(x==arr2[j])
                x=rand()%49+1;//重新產生亂數 
        }
        arr2[i]=x;
    }
    cout<<"此次電腦選號為:";
    for(int i:arr2) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"是否重新選號:";
    cin>>cho; 
    if(cho=='y' || cho=='Y'){
        goto menu;
    }else{
        goto end;
    }
    end:
        cout<<"謝謝您的選購,歡迎下次再來"<<endl;
        
    //巴斯卡三角型
    //int y=5;
//  int arr3[y][y+1];
    int arr3[5][6]={};
    arr3[0][0]=arr3[0][1]=1;//第一列前二個內容為1
    for(int i=1;i<5;i++) {
        arr3[i][0]=1;
        for(int j=1;j<=i+1;j++){
            arr3[i][j]=arr3[i-1][j-1]+arr3[i-1][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(arr3[i][j]!=0)
            cout<<setw(3)<<arr3[i][j];
        }
        cout<<endl;
    }
    system("pause");//暫停
    return 0;//結束
}
