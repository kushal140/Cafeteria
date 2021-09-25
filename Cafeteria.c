#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch1;
    int ch2;/*variable to choose bevarage*/
    int ct,q1,tt=0;/*Tea variable*/
    int cc,q2,tc=0;/*Coffee Vvariable*/
    int cd,q3,td=0;/*Cold Drinks Variables*/
    int cs,q4,ts=0;/*Snaks Variable*/
    int qs,tsa=0;/*Samosa Variable*/
    int qv,tva=0;/*Vadapav Variable*/
    int qf,tff=0;/*French Fries Variable*/
    int qsd,tsd=0;/*Sandwhich Variable*/
    int qi,ti=0;/*Idli Vada Variable*/
    int cic,qic,tic=0;/*Ice-Cream*/
    int cm;/*Choice of Milk Shake*/
    int m,mt=0;/*Mango Variable*/
    int sb,sbt=0;/*Strawberry Variable*/
    int cl,clt=0;/*Choclate Variable*/
    int b,bt=0;/*Badam Variable*/
    int chb;/*Bill Variable*/
    int total=0;
   printf ("\t\t\t\t\tCOOL'S CAFE");
   printf("\n\n\t\t\t\tWELCOME TO COOL'S CAFE\n\nWant to eat something delicious?\n\nPlease, refer our menu card for your order.");
start:
    printf("\n\t1. Beverages\n\t2. Snaks\n\t3. Ice-Cream\n\t4. Milk Shakes\n\nEnter your Choice : ");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 1/*Beverage Section*/ :
beverage:
        printf("\n\t1.Tea\n\t2.Coffee\n\t3.Cold Drinks\n\nEnter Your Choice : ");
        scanf("%d",&ch2);
        switch(ch2)
        {
        case 1/*Tea Section*/ :
tea:
            printf("\n  Name\t\tPrice");
            printf("\n1.Black Tea\t\t5\n2.Green Tea\t\t5\n3.Lemon Tea\t\t5\n4.Ordinary Tea\t5\n5.Ice Tea\t\t5\n\nEnter your Choice : ");
            scanf("%d",&ct);
            printf("\nEnter The Quantity : ");
            scanf("%d",&q1);
            if(ct<=5)
            {
                if(ct!=0 && tt==0)
                {
                    tt=q1*5;
                }
                else
                {
                    tt+=(q1*5);
                }
            }
            else
            {
                printf("\nInvalid Choice");
                goto tea;
            }
            printf("\nTea Price = %d\n",tt);
            break;
        case 2/*Coffee Section*/:
coffee:
            printf("\n  Name\t\t\t\tPrice");
            printf("\n1.Cold Coffee\t\t20\n2.Hot Coffee\t\t20\n3.Black Coffee\t\t20\n\nEnter your Choice : ");
            scanf("%d",&cc);
            printf("\nEnter The Quantity : ");
            scanf("%d",&q2);
            if(cc<=3)
            {
                if(cc!=0 && tc==0)
                {
                    tc=q2*20;
                }
                else
                {
                    tc+=(q2*20);
                }
            }
            else
            {
                printf("\nInvalid Choice");
                goto coffee;
            }
            printf("\nCoffee Price = %d\n",tc);
            break;
        case 3/*Cold Drinks*/:
cold:
            printf("\n  Name\t\t\tPrice");
            printf("\n1.Pepsi\t\t\t10\n2.Coco-Cola\t\t10\n3.Sprite\t\t10\n4.Thumbsup\t\t10\n\nEnter Your Choice : ");
            scanf("%d",&cd);
            printf("\nEnter The Quantity : ");
            scanf("%d",&q3);
            if(cd<=3)
            {
                if(cd!=0 && td==0)
                {
                    td=q3*10;
                }
                else
                {
                    td+=(q3*10);
                }
            }
            else
            {
                printf("\nInvalid Choice");
                goto cold;
            }
            printf("\nCold Drink Price = %d\n",td);
            break;
        default :
            printf("\nInvalid Choice");
            goto beverage;
        }
        break;
    case 2/*Snaks*/:
snaks:
        printf("\n  Name\t\t\tPrice");
        printf("\n1.Samosa\t\t10\n2.Vada pav\t\t10\n3.French Fries\t20\n4.Sandwhich\t\t15\n5.Idli vada\t\t20\n\nEnter your choice : ");
        scanf("%d",&cs);
    switch(cs)
        {
        case 1:
            printf("\nEnter Quantity of Samosa : ");
            scanf("%d",&qs);
            tsa+=10*qs;
            printf("\nPrice of Samosa = %d\n",tsa);
            break;
        case 2:
            printf("\nEnter Quantity of Vadapav : ");
            scanf("%d",&qv);
            tva+=10*qv;
            printf("\nPrice of Vada Pav = %d\n",tva);
            break;
        case 3 :
            printf("\nEnter Quantity of Packets of French Fries : ");
            scanf("%d",&qf);
            tff+=20*qf;
            printf("\nPrice of French Fries = %d\n",tff);
            break;
        case 4:
            printf("\nEnter Quantity of Sandwhich : ");
            scanf("%d",&qsd);
            tsd+=15*qsd;
            printf("\nPrice of Sandwhich = %d\n",tsd);
            break;
        case 5:
            printf("\nEnter Quantity of Idli vada(2 Idli,2 Vada) : ");
            scanf("%d",&qi);
            ti+=20*qi;
            printf("\nPrice of Idli Vada = %d\n",ti);
            break;
        default:
            printf("Invalid Choice");
            goto snaks;
    }
        break;
    case 3 /*Ice Cream*/:
ice:
        printf("\n  Name\t\t\tPrice");
        printf("\n1.Vanila\t\t20\n2.Butterscotch\t20\n3.Chocalate\t\t20\n\nEnter your Choice : ");
        scanf("%d",&cic);
        printf("\nEnter quantity of packets : ");
        scanf("%d",&qic);
        if(cic<=3)
        {
        tic+=(qic*20);
        }
        else
        {
            printf("\nInvalid Choice");
            goto ice;
        }
        printf("\nPrice of Ice-Cream = %d\n",tic);
        break;
    case 4/*Milk Shakes*/:
milk:
        printf("\n  Name\t\t\tPrice");
        printf("\n1.Mango\t\t\t25\n2.Strawberry\t20\n3.Choclate\t\t25\n4.Badam\t\t\t30\n\nEnter your Choice : ");
        scanf("%d",&cm);
        switch(cm)
        {
        case 1:
            printf("\nHow many glasses of Mango Milk Shake do you want?\n");
            scanf("%d",&m);
            mt+=25*m;
            printf("\nPrice of Mango Milk Shake = %d\n",mt);
            break;
        case 2:
            printf("\nHow many glasses of Strawberry Milk Shake do you want?\n");
            scanf("%d",&sb);
            sbt+=20*sb;
            printf("\nPrice of Strawberry Milk Shake = %d\n",sbt);
            break;
        case 3:
            printf("\nHow many glasses of Choclate Milk Shake do you want?\n");
            scanf("%d",&cl);
            clt+=25*cl;
            printf("\nPrice of Choclate Milk Shake = %d\n",clt);
            break;
        case 4:
            printf("\nHow many glasses of Badam Milk Shake do you want?\n");
            scanf("%d",&b);
            bt+=30*b;
            printf("\nPrice of Badam Milk Shake = %d\n",bt);
            break;
        default:
            printf("\nInvalid Choice");
            goto milk;
            break; 
    }
        goto bill_options;
    default:
        printf("\nInvalid Choice");
        goto start;
        break; 
  }
bill_options:
    printf("\nIf You want to add an item.. Press 1\nIf you want to proceed to billing.. press 2\n");
    scanf("%d",&chb);
    if(chb==1)
    {
        goto start;
    }
    else if(chb==2)
    {
        goto bill;
    }
    else
    {
        printf("\nInvalid Choice");
        goto bill_options;
    }
bill:
printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n\n\t\t\t*****Bill*****");
    printf("\n\nName\t\t\t\t\tPrice\n");
    if(tt!=0)
    {
      printf("\nTea\t\t\t\t\t\t%d",tt);
      total+=tt;
    }
    if(tc!=0)
    {
      printf("\nCoffee\t\t\t\t\t%d",tc);
      total+=tc;
    }
    if(td!=0)
    {
      printf("\nCold Drink\t\t\t\t%d",td);
      total+=td;
    }
    if(ts!=0)
    {
      printf("\nSnacks\t\t\t\t\t%d",ts);
      total+=ts;
    }
    if(tsa!=0)
    {
      printf("\nSamosa\t\t\t\t\t%d",tsa);
      total+=tsa;
    }
    if(tva!=0)
    {
      printf("\nVada Pav\t\t\t\t%d",tva);
      total+=tva;
    }
    if(tff!=0)
    {
      printf("\nFrench Fries\t\t\t%d",tff);
      total+=tff;
    }
    if(tsd!=0)
    {
      printf("\nSandwhich\t\t\t\t%d",tsd);
      total+=tsd;
    }
    if(ti!=0)
    {
      printf("\nIdli Vada\t\t\t\t%d",ti);
      total+=ti;
    }
    if(tic!=0)
    {
      printf("\nIce-Cream\t\t\t\t%d",tic);
      total+=tic;
    }
    if(mt!=0)
    {
      printf("\nMango Milk Shake\t\t%d",mt);
      total+=mt;
    }
    if(sbt!=0)
    {
      printf("\nStrawberry Milk Shake\t%d",sbt);
      total+=sbt;
    }
    if(clt!=0)
    {
      printf("\nChoclate Milk Shake\t\t%d",clt);
      total+=clt;
    }
    if(bt!=0)
    {  
      printf("\nBadam Milk Shake\t\t%d",bt);
      total+=bt;
    }
    printf("\n\nTotal\t\t\t\t\t%d",total);
}
