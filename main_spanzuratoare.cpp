#include <iostream>
#include<string.h>
using namespace std;
int n, k=0;
char v[256];
int verif(char c, char s[256])
{
    if(strchr(s,c)!=NULL) return 1;
    else return 0;
}

void afisare(char c, char s[256])
{
    if(verif(c,s)==0 && k==1)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"TTTTTTTT"<<endl;
}
else
    if(verif(c,s)==0 && k==2)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|    | "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"TTTTTTTT"<<endl;
}
else
    if(verif(c,s)==0 && k==3)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|    | "<<endl;
     cout<<"|   /  "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"TTTTTTTT"<<endl;
}
else
    if(verif(c,s)==0 && k==4)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|    | "<<endl;
     cout<<"|   / \ "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"TTTTTTTT"<<endl;
}
else
    if(verif(c,s)==0 && k==5)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|    | "<<endl;
     cout<<"|   /|\ "<<endl;
     cout<<"|    | "<<endl;
     cout<<"|    | "<<endl;
     cout<<"|      "<<endl;
     cout<<"|      "<<endl;
     cout<<"TTTTTTTT"<<endl;
}
else
    if(verif(c,s)==0 && k==6)
    {cout<<" ____"<<endl;
     cout<<"|    |"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|  0   0"<<endl;
     cout<<"|    0"<<endl;
     cout<<"|    | "<<endl;
     cout<<"|   /|\ " <<endl;
     cout<<"|    | "<<endl;
     cout<<"|    | "<<endl;
     cout<<"|   / \ "<<endl;
     cout<<"|  /   \ "<<endl;
     cout<<"TTTTTTTT"<<endl;
cout<<"Ati murit!";
}

}

int main()
{char s[256], c, *p;
int poz;
    cout<<"Introduceti cuvantul: "; cin.get(s, 256);
for(int i=1;i<=100;i++) cout<<endl;

while(strncmp(s,v, strlen(s))!=0)
    { cout<<"Introduceti o litera: "; cin>>c; k++;

   for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==c)
            {v[i]=c;
            for(int f=0; f<=i;f++)
                cout<<v[f];
        for(int f=i+1;f<strlen(s); f++)
        cout<<"_ ";
        cout<<endl;
        }
        else
       afisare(c, s);

    }
    }
    return 0;
}
