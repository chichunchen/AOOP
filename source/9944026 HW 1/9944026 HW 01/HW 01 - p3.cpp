#include <iostream>

using namespace std;

int main()
{
    int survey[20];//�����D�حn�D�A���@20�檺�}�C

    for(int i=0;i<20;i++)//���O��J�����B�y���B���O�A�@20�ո��
    {
        int status=1,language=1,category=1;
        int s=0,l=0,c=0;
        cout<<"What class? 0:Upper class 1:Middle class 2:Lower class :";
            cin>>s;
        cout<<"What language? 3:English 4:Chinese 5:Regional language :";
            cin>>l;
        cout<<"What category? 6:Daily 7:Supplement 8:Tabloid :";
            cin>>c;

        survey[i]=(status<<s)+(language<<l)+(category<<c);
    }

    //�}�l�@�p���Acount1�O�p��English daily���H�ơA�u�n����J3�M6�N��b���A�]��&72
    int count1=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&72)==72)
            count1+=1;
    }

    //count2�O�p��upper class who read tabloid���H�ơA�u�n����J0�M8�N��b���A�]��&257
    int count2=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&257)==257)
            count2+=1;
    }

    //count3�O�p��regional language readers ���H�ơA�u�n����J5�Y��b���A�]��&32
    int count3=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&32)==32)
            count3+=1;
    }

    //�@���
    cout<<"English daily : "<<count1<<endl;
    cout<<"upper class who read tabloid : "<<count2<<endl;
    cout<<"regional language readers : "<<count3<<endl;

    system("pause");
    return 0;
}
