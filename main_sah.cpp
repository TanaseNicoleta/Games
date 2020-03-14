#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int a[9][9];
//char col[10]=" abcdefgh";


int pion(char cul, char c1, int l1, char c2, int l2)

    {if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
    else
        if(cul=='n')
        {
            if(l1==2)
               {
                if(l1!=l2-1 && l1!=l2-2) return 0;
                else
                {cout<<"\nMuta pion negru pentru prima oara\n";
                    if(c1==c2)
                      if(a[l2][c2-'a'+1]!=0)
                        { cout<<"\nPozitie ocupata";
                        return 0;
                        }
                       else return 1;
                    else
                        {if((c1==c2-1 ||c1==c2+1) && (a[l2][c2-'a'+1]>=11&&a[l2][c2-'a'+1]<=16)) return 1;
                        else
                             { cout<<"\nNu exista piesa de luat!";
                            return 0;}
                        }

                }
               }
               else
               {
                 if(l1!=l2-1) return 0;
                else
                {cout<<"\nMuta pion negru \n";
                    if(c1==c2)
                      if(a[l2][c2-'a'+1]!=0)
                        { cout<<"\nPozitie ocupata";
                        return 0;
                        }
                       else return 1;
                    else
                        {if((c1==c2-1 ||c1==c2+1) && (a[l2][c2-'a'+1]>=11&&a[l2][c2-'a'+1]<=16)) return 1;
                        else
                             { cout<<"\nNu exista piesa de luat!";
                            return 0;}
                        }

                }
               }
        }
        else
            if(cul=='a')
            {
                 if(l1==7)
               {
                if(l1!=l2+1 && l1!=l2+2) return 0;
                else
                {cout<<"\nMuta pion alb pentru prima oara\n";
                    if(c1==c2)
                      if(a[l2][c2-'a'+1]!=0)
                        { cout<<"\nPozitie ocupata";
                        return 0;
                        }
                       else return 1;
                    else
                        {if((c1==c2-1 ||c1==c2+1) && (a[l2][c2-'a'+1]>=1&&a[l2][c2-'a'+1]<=6)) return 1;
                        else
                             { cout<<"\nNu exista piesa de luat!";
                            return 0;}
                        }

                }
               }
               else
               {
                 if(l1!=l2+1) return 0;
                else
                {cout<<"\nMuta pion alb \n";
                    if(c1==c2)
                      if(a[l2][c2-'a'+1]!=0)
                        { cout<<"\nPozitie ocupata";
                        return 0;
                        }
                       else return 1;
                    else
                        {if((c1==c2-1 ||c1==c2+1) && (a[l2][c2-'a'+1]>=1&&a[l2][c2-'a'+1]<=6)) return 1;
                        else
                             { cout<<"\nNu exista piesa de luat!";
                            return 0;}
                        }

                }
               }
        }

    else cout<<"\nPiesa gresita\n";
    return 0;
    }
int rege(char cul, char c1, int l1, char c2, int l2)
    {if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
     else
        if((c1!=c2 && c1!=c2-1 && c1!=c2+1)|| (l1!=l2&& l1!=l2-1 && l1!=l2+1))  return 0;
        else
          if((c1==c2-1 || c1==c2+1)&&(l1==l2)) return 1;
          else if((l1==l2-1 || l1==l2+1)&&(c1==c2)) return 1;
               else
               if (abs(c1-c2)==1&&abs(l1-l2)==1) return 1;
     return 0;}
int tura(char cul, char c1, int l1, char c2, int l2)
    {int x, y, i;
    if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
    else
    if (c1!=c2 && l1!=l2) return 0;
    else
        if(c1==c2)
        {
        if(l1<l2) {x=l1+1; y=l2-1;}
        else {x=l2+1; y=l1-1;}
        cout<<"\n"<<x<<" "<<y<<endl;
        for(i=x; i<=y;i++)
            if(a[i][c1-'a'+1]!=0) return 0;
       // if(cul=='a'&&a[l2][c2-'a'+1]>10) return 0;
        //if(cul=='n'&&a[l2][c2-'a'+1]<10) return 0;
        return 1;
        }
        else
        if(l1==l2) {if (c1<c2){x=c1-'a'+2; y=c2-'a';}
                    else {x=c2-'a'+2; y=c1-'a';}
                    for(i=x;i<=y;i++) if(a[l1][i]!=0) return 0;
                    //if(cul=='a'&&a[l2][c2-'a'+1]>10) return 0;
                    //if(cul=='n'&&a[l2][c2-'a'+1]<10) return 0;
                    return 1;          }

    }
int nebun(char cul, char c1, int l1, char c2, int l2)
    {int i,j;
    if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
    else
        if(abs(l1-l2)!=abs(c1-c2))
            {cout<<"\nDeplasare incorecta!\n";return 0;}
        else
            {if(l1<l2)
             {if(c1<c2) { for(i=l1+1, j=c1-'a'+2; i<=l2 && j<=c2-'a'+1; i++, j++)
                            if(a[i][j]!=0) return 0;
                          return 1; }
              else
                {for(i=l1+1, j=c1-'a'; i<=l2 && j>=c2-'a'+1; i++, j--)
                if(a[i][j]!=0) return 0;
                 return 1;}
             }
           else
        if(c1>c2)
       {
           for(i=l1-1, j=c1-'a'; i>=l2 && j>=c2-'a'+1;i--,j--)
            if(a[i][j]!=0) return 0;
           return 1;
       }
       else{for(i=l1-1, j=c1-'a'+2; i>=l2 && j<=c2-'a'+1; i--, j++)
        if(a[i][j]!=0) return 0;
        return 1;
       }
            }
    }
int dama(char cul, char c1, int l1, char c2, int l2)
    { if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
    else
        if(tura(cul, c1, l1, c2, l2)==1 || nebun(cul, c1, l1, c2, l2)==1) return 1;
       else return 0;
    }
int cal(char cul, char c1, int l1, char c2, int l2)
    {if (a[l2][c2-'a'+1]!=0 &&a[l1][c1-'a'+1]/10==a[l2][c2-'a'+1]/10) return 0;
    else
    if ((c2==c1-1 && ((l2==l1-2) || (l2==l1+2)))|| (c2==c1+1 && ((l2==l1-2 ||l2==l1+2))) || (c2==c1-2 && (l2==l1-1 || l2==l1+1)) || (c2==c1+2 &&(l2==l1-1 || l2==l1+1))) return 1;
     else return 0;
    }
 void afisare()
{char c; int i, j;
 system("CLS");
cout<<endl<<"  ";
for(c='a'; c<='h'; c++)
    cout<<"  "<<c<<"  ";
cout<<endl<<"  ";
for(i=1;i<=8;i++)
    cout<<"_____";
    for(i=1;i<=8;i++)
    {cout<<endl<<9-i<<"|";
    for(j=1;j<=8;j++)
        switch(a[i][j])
    {case 0:cout<<"    |";break;
     case 1:cout<<" Pn |"; break;
     case 2:cout<<" Tn |"; break;
     case 3:cout<<" Cn |"; break;
     case 4:cout<<" Nn |"; break;
     case 5:cout<<" Rn |"; break;
     case 6:cout<<" Dn |"; break;
     case 11:cout<<" Pa |"; break;
     case 12:cout<<" Ta |"; break;
     case 13:cout<<" Ca |"; break;
     case 14:cout<<" Na |"; break;
     case 15:cout<<" Ra |"; break;
     case 16:cout<<" Da |"; break;

    }
    cout<<endl<<" |";
    for(j=1;j<=8;j++) cout<<"____|";

    }

}
void initializare()
{
    a[1][1]=2;
    a[1][2]=3;
    a[1][3]=4;
    a[1][4]=5;
    a[1][5]=6;
    a[1][6]=4;
    a[1][7]=3;
    a[1][8]=2;
    a[8][1]=12;
    a[8][2]=13;
    a[8][3]=14;
    a[8][4]=15;
    a[8][5]=16;
    a[8][6]=14;
    a[8][7]=13;
    a[8][8]=12;
    for(int i=2; i<=7;i++)
        for(int j=1; j<=8; j++)
        if(i==2) a[i][j]=1;
        else if(i==7) a[i][j]=11;
        else a[i][j]=0;

}
int verificare(char c1, unsigned int l1, char c2, unsigned int l2)
{if(l1>=1 && l1<=8 && c1>='a' && c1<='h'&& l2>=1 && l2<=8 && c2>='a' && c2<='h')
   {
    if(a[l1][c1-'a'+1]==0) {cout<<"\nPiesa inexistenta!"; return 0;}
    else{
        switch(a[l1][c1-'a'+1])
    {case 1: {if(pion('n',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=1;
                return 1;}}break;
     case 2: {if(tura('n',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=2;
                return 1;}}break;
     case 3: {if(cal('n',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=3;
                return 1;}}break;
     case 4:{if(nebun('n',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=4;
                return 1;}} break;
     case 5:{if(rege('n',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=5;
                return 1;}} break;
     case 6: {if(dama('n',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=6;
                return 1;}}break;
     case 11: {if(pion('a',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=11;
                return 1;}}break;
     case 12: {if(tura('a',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=12;
                return 1;}}break;
     case 13: {if(cal('a',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=13;
                return 1;}} break;
     case 14: {if(nebun('a',c1, l1, c2, l2)==1)
                {a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=14;
                return 1;}} break;
     case 15: {if(rege('a',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=15;
                return 1;}}break;
     case 16: {if(dama('a',c1, l1, c2, l2)==1)
                {cout<<c1<<l1<<c2<<l2<<' '<<a[l1][c1-'a'+1]<<" "<<a[l2][c2-'a'+1];
                 a[l1][c1-'a'+1]=0;
                a[l2][c2-'a'+1]=16;
                return 1;}}break;

    }
    }
    }
return 0;
}
void afisare2()
{cout<<endl<<endl;
    for(int i=1; i<=8;i++)
    {for(int j=1; j<=8; j++)
    cout<<a[i][j]<<' ';
    cout<<endl;
    }
}
int main()
{char r='n', c1, c2; int juc=0;
unsigned int l1, l2;
    initializare();
    afisare();
do{
afisare();
juc=juc%2+1;
if (juc==1)
cout<<"\n\nMutare jucator "<<juc<<"(alb):\n Pozitia initiala a piesei (coloana linie):";
else
cout<<"\n\nMutare jucator "<<juc<<"(negru):\n Pozitia initiala a piesei (coloana linie):";
cin>>c1>>l1;
cout<<" Pozitia finala a piesei (coloana linie):"; cin>>c2>>l2;
if(c1>='A'&&c1<='Z') c1=c1+32;
if(c2>='A'&&c2<='Z') c2=c2+32;
l1=9-l1; l2=9-l2;
if ((juc==2 && a[l1][c1-'a'+1]>0&&a[l1][c1-'a'+1]<10)||(juc==1 && a[l1][c1-'a'+1]>10&&a[l1][c1-'a'+1]<17))
{if(verificare(c1, l1, c2, l2)==1)
    { afisare();
    cout<<endl<<"Mutare permisa";
    }
else cout<<"\nMuntare nepermisa!\n";}
else
    cout<<"\nPiesa este a celuilalt jucator!";
cout<<"\nContinuati?[d/n]";cin>>r;
}while(r=='d'|| r=='D');


    return 0;
}
