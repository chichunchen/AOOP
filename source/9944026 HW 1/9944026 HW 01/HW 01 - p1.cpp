#include <iostream>

using namespace std;

void showbits(int n)
{
    int temp=0;//計算二進位位數的暫存數字
    int count=0;//計算mask最大從第幾位開始除到1的數字
    int mask=1;//遮罩用的數字

    temp=n;//暫存傳入的input

    //計算此數字轉成二進位後，最左邊的1是到底幾位，用count做計算
    for(count=0;temp>1;count++)
    {
        temp=temp>>1;
    }

    //將mask左移到剛剛算出的最大位數
    for(int i=0;i<count;i++)
    {
        mask=mask<<1;
    }

    //開始做二進位的顯示，mask每左移一位就做一次判斷，只要不是0就顯示1，反之則顯示0
    while(mask>0)
    {
        if((mask&n)==0)
            cout<<0;
        else
            cout<<1;

        mask=mask>>1;
    }
}

int main()
{
    int input;//宣告使用者輸入的數字

    cout<<"Enter a number:";
    cin>>input;

    showbits(input);//呼叫函式showbits


    system("pause");
    return 0;
}
