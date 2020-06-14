#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Digital_Device
{
    float price;
    char model[100];
    char type[100];
    int warranty;
}m,k,pen,ww;

struct Fashion_Wear
{
    float price;
    char fabric[100];
    char size[100];
    char design[100];
}ts,pant,fs,shoe,pun,shar;
struct AdminInfo
{
    char ID[50];
    char password[50];
}admin;

struct CustomerInfo
{
    char name[50];
    char address[100];
    int mobile_no;
    char email[100];
}cust;

struct detail
{
    char name[100];
    float price;
}prd[22];

void A4Tech_m(struct Digital_Device m1);
void LogiTech_m(struct Digital_Device m2);
void A4Tech_k(struct Digital_Device k1);
void LogiTech_k(struct Digital_Device k2);
void Trans_8(struct Digital_Device pen1);
void Trans_16(struct Digital_Device pen2);
void T_S1(struct Fashion_Wear ts1);
void T_S2(struct Fashion_Wear ts2);
void Pant1(struct Fashion_Wear pan1);
void Pant2(struct Fashion_Wear pan2);
void For_S1(struct Fashion_Wear fs1);
void For_S2(struct Fashion_Wear fs2);
void Shoe1(struct Fashion_Wear sh1);
void Shoe2(struct Fashion_Wear sh2);
void Punj1(struct Fashion_Wear pun1);
void Punj2(struct Fashion_Wear pun2);
void Shar1(struct Fashion_Wear shr1);
void Shar2(struct Fashion_Wear shr2);
void M_W1(struct Digital_Device mw1);
void M_W2(struct Digital_Device mw2);
void W_W1(struct Digital_Device ww1);
void W_W2(struct Digital_Device ww2);

int main( )
{
    FILE *fp;
    char prdct,s[4];
    int n , pdcd , brnd, button, x, b, i,z;
    float df,store,y;
    printf("\t\t\t\tWelcome to DeshBondhu Online Shopping Store\n");
    printf("\t\t\t************************************************************\n");
    printf("\t\t\t\tOur Contact Info:\n");
    printf("\t\t\t*****************************\n");
    printf("\t\t\tMobile No. : 01765******\n");
    printf("\t\t\tEmail: deshbondhubd@gmail.com\n");

    p:printf("Press 1 for Admin Login:\n");
    printf("Press 2 for Customer Details Entry:\n");
    scanf("%d",&n);

    if(n==1)
    {
       q:printf("Enter Admin ID : ");
       scanf("%s",admin.ID);
       printf("Enter Password : ");
       scanf("%s",admin.password);
       if(strcmp(admin.ID,"zahid101")==0 && strcmp(admin.password,"ABC123")==0)
       {
           goto v;
       }
       else if(strcmp(admin.ID,"towsif102")==0 && strcmp(admin.password,"DEF456")==0)
       {
           goto v;
       }
       else if(strcmp(admin.ID,"uchchhash103")==0 && strcmp(admin.password,"GHI789")==0)
       {
           goto v;
       }
       else
       {
           printf("Invalid Information.\n");
           goto q;
       }
                v:printf("Login Successful!\n");
                printf("Enter brand code to see product detail: ");
                scanf("%d",&b);
                if(b==101)
                {
                    A4Tech_m(m);
                }
                else if(b==102)
                {
                    LogiTech_m(m);
                }
                else if(b==103)
                {
                    A4Tech_k(k);
                }
                else if(b==104)
                {
                    LogiTech_k(k);
                }
                else if(b==105)
                {
                    Trans_8(pen);
                }
                else if(b==106)
                {
                    Trans_16(pen);
                }
                else if(b==107)
                {
                    M_W1(ww);
                }
                else if(b==108)
                {
                    M_W2(ww);
                }
                else if(b==109)
                {
                    W_W1(ww);
                }
                else if(b==110)
                {
                    W_W2(ww);
                }
                else if(b==111)
                {
                    T_S1(ts);
                }
                else if(b==112)
                {
                    T_S2(ts);
                }
                else if(b==113)
                {
                    Pant1(pant);
                }
                else if(b==114)
                {
                    Pant2(pant);
                }
                else if(b==115)
                {
                    For_S1(fs);
                }
                else if(b==116)
                {
                    For_S2(fs);
                }
                else if(b==117)
                {
                    Shoe1(shoe);
                }
                else if(b==118)
                {
                    Shoe2(shoe);
                }
                else if(b==119)
                {
                    Punj1(pun);
                }
                else if(b==120)
                {
                    Punj2(pun);
                }
                else if(b==121)
                {
                    Shar1(shar);
                }
                else if(b==122)
                {
                    Shar2(shar);
                }
                else
                {
                exit(0);
                }
            }



    if(n==2)
    {
        printf("Enter your name: ");
        scanf("%s",cust.name);
        fflush(stdin);
        printf("Enter your address(only block letters): ");
        gets(cust.address);
        fflush(stdin);
        printf("Enter your Contact Number: ");
        scanf("%d",&cust.mobile_no);
        fflush(stdin);
        printf("Enter your Email: ");
        gets(cust.email);
        fflush(stdin);

        printf("\n");

    a:printf("\t\t\t\tOur Product Category\n");
    printf("\t# Computer Accessories (press 'C' for Computer Accessories)\n");
    printf("\t# Wrist Watches (press 'W' for Wrist Watches)\n");
    printf("\t# Fashion & Wear (press 'F' for Dresses & Clothes)\n");

    fflush(stdin);

    printf("Enter key to see various products in considered categories: ");
    scanf("%c",&prdct);

    switch(prdct)
    {
    case 'C':
    case 'c':
        printf("\t\t\t\tCOMPUTER ACCESSORIES\n");
        printf("\t>Mouse (code: 1)\n");
        printf("\t>Keyboard(code: 2)\n");
        printf("\t>PenDrive (code: 3)\n");
        break;

    case 'W':
    case 'w':
        printf("\t\t\t\tWRIST WATCHES\n");
        printf("\t>Men's Watches (code: 4)\n");
        printf("\t>Women's Watches (code: 5)\n");
        break;

    case 'F':
    case 'f':
        printf("\t>T-Shirts(code: 6)\n");
        printf("\t>Pants (code: 7)\n");
        printf("\t>Formal Shirts (code: 8)\n");
        printf("\t>Shoes (code: 9)\n");
        printf("\t>Punjabi(code: 10)\n");
        printf("\t>Sharees(code: 11)\n");
        break;
    default:
        printf("Wrong Keyword.");
        break;
    }
    }
    if(n>2)
    {
        printf("\nInvalid Key.");
        goto p;
    }
    printf("\n");
    printf("Enter product code to see our brands: \n");
    scanf("%d",&pdcd);
    switch(pdcd)
    {
    case 1:
        printf("(1)A4Tech USB Optical Mouse (code: 101)");
        printf("\n(2)LogiTech USB Optical Mouse (code: 102)");
        break;
    case 2:
        printf("(1)A4Tech USB Keyboard (code: 103)");
        printf("\n(2)Logitech USB Keyboard (code: 104)");
        break;
    case 3:
        printf("(1)Transcend 8GB USB Pendrive (code: 105)");
        printf("\n(1)Transcend 16GB USB Pendrive (code: 106)");
        break;
    case 4:
        printf("(1)Rolex Watch (code: 107)");
        printf("\n(2)G-Shock Watch (code: 108)");
        break;
    case 5:
        printf("(1)Curren Watch (code: 109)");
        printf("\n(2)Fossil Watch (code: 110)");
        break;
    case 6:
        printf("(1)J.Crew T-Shirts (code: 111)");
        printf("\n(2)Richman T-Shirts (code: 112)");
        break;
    case 7:
        printf("(1)LivingTex Denim Jeans Pant (code: 113)");
        printf("\n(2)Gabardine Pants (code: 114)");
        break;
    case 8:
        printf("(1)Raymond Half Sleeves Shirts (code: 115)");
        printf("\n(2)Raymond Full Sleeves Shirts (code: 116)");
        break;
    case 9:
        printf("(1)North Star Sneaker (code: 117)");
        printf("\n(2)Lotto Shoes (code: 118)");
        break;
    case 10:
        printf("(1)Aarong Printed Punjabi (code: 119)");
        printf("\n(2)Naborupa Printed Punjabi (code: 120)");
        break;
    case 11:
        printf("(1)Aarong Printed Sharees (code: 121)");
        printf("\n(2)Naborupa Printed Sharees (code: 122)");
        break;
    }
    printf("\n\nEnter your favourite brand code: \n");
    scanf("%d",&brnd);

     switch(brnd)
        {
        case 101:
    fp=fopen("mouse1.txt","r");
    fgets(m.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(m.model);
    fflush(stdin);
    fgets(m.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(m.type);
    fflush(stdin);
    fscanf(fp,"%d",&m.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",m.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&m.price);
    printf("%f\n",m.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
        break;

         case 102:
    fp=fopen("mouse2.txt","r");
    fgets(m.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(m.model);
    fflush(stdin);
    fgets(m.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(m.type);
    fflush(stdin);
    fscanf(fp,"%d",&m.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",m.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&m.price);
    printf("%f\n",m.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
        break;

         case 103:
    fp=fopen("keyboard1.txt","r");
    fgets(k.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(k.model);
    fflush(stdin);
    fgets(k.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(k.type);
    fflush(stdin);
    fscanf(fp,"%d",&k.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",k.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&k.price);
    printf("%f\n",k.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 104:
    fp=fopen("keyboard2.txt","r");
    fgets(k.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(k.model);
    fflush(stdin);
    fgets(k.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(k.type);
    fflush(stdin);
    fscanf(fp,"%d",&k.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",k.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&k.price);
    printf("%f\n",k.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

    case 105:
    fp=fopen("pendrive1.txt","r");
    fgets(pen.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(pen.model);
    fflush(stdin);
    fgets(pen.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(pen.type);
    fflush(stdin);
    fscanf(fp,"%d",&pen.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",pen.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pen.price);
    printf("%f\n",pen.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 106:
    fp=fopen("pendrive2.txt","r");
    fgets(pen.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(pen.model);
    fflush(stdin);
    fgets(pen.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(pen.type);
    fflush(stdin);
    fscanf(fp,"%d",&pen.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",pen.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pen.price);
    printf("%f\n",pen.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 107:
    fp=fopen("rolex.txt","r");
    fgets(ww.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww.model);
    fflush(stdin);
    fgets(ww.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww.price);
    printf("%f\n",ww.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 108:
    fp=fopen("gShock.txt","r");
    fgets(ww.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww.model);
    fflush(stdin);
    fgets(ww.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww.price);
    printf("%f\n",ww.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 109:
    fp=fopen("curren.txt","r");
    fgets(ww.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww.model);
    fflush(stdin);
    fgets(ww.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww.price);
    printf("%f\n",ww.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 110:
    fp=fopen("fossil.txt","r");
    fgets(ww.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww.model);
    fflush(stdin);
    fgets(ww.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww.price);
    printf("%f\n",ww.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 1 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 111:
    fp=fopen("jcrew.txt","r");
    fgets(ts.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(ts.fabric);
    fflush(stdin);
    fgets(ts.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(ts.design);
    fflush(stdin);
    fscanf(fp,"%s",&ts.size);
    printf("\nSize: ");
    printf("%s\n",ts.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ts.price);
    printf("%f\n",ts.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 112:
    fp=fopen("richman.txt","r");
    fgets(ts.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(ts.fabric);
    fflush(stdin);
    fgets(ts.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(ts.design);
    fflush(stdin);
    fscanf(fp,"%s",&ts.size);
    printf("\nSize: ");
    printf("%s\n",ts.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ts.price);
    printf("%f\n",ts.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

      case 113:
    fp=fopen("livingtex.txt","r");
    fgets(pant.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(pant.fabric);
    fflush(stdin);
    fgets(pant.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(pant.design);
    fflush(stdin);
    fscanf(fp,"%s",&pant.size);
    printf("\nSize: ");
    printf("%s\n",pant.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pant.price);
    printf("%f\n",pant.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

      case 114:
          fp=fopen("gabardine.txt","r");
    fgets(pant.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(pant.fabric);
    fflush(stdin);
    fgets(pant.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(pant.design);
    fflush(stdin);
    fscanf(fp,"%s",&pant.size);
    printf("\nSize: ");
    printf("%s\n",pant.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pant.price);
    printf("%f\n",pant.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 115:
      fp=fopen("raymond1.txt","r");
    fgets(fs.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(fs.fabric);
    fflush(stdin);
    fgets(fs.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(fs.design);
    fflush(stdin);
    fscanf(fp,"%s",&fs.size);
    printf("\nSize: ");
    printf("%s\n",fs.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&fs.price);
    printf("%f\n",fs.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

       case 116:
      fp=fopen("raymond2.txt","r");
    fgets(fs.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(fs.fabric);
    fflush(stdin);
    fgets(fs.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(fs.design);
    fflush(stdin);
    fscanf(fp,"%s",&fs.size);
    printf("\nSize: ");
    printf("%s\n",fs.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&fs.price);
    printf("%f\n",fs.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

           case 117:
      fp=fopen("shoe1.txt","r");
    fgets(shoe.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(shoe.fabric);
    fflush(stdin);
    fgets(shoe.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(shoe.design);
    fflush(stdin);
    fscanf(fp,"%s",&shoe.size);
    printf("\nSize: ");
    printf("%s\n",shoe.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&shoe.price);
    printf("%f\n",shoe.price);
    fclose(fp);
    printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
    scanf("%d",&button);
    break;

     case 118:
      fp=fopen("shoe2.txt","r");
      fgets(shoe.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(shoe.fabric);
      fflush(stdin);
      fgets(shoe.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(shoe.design);
      fflush(stdin);
      fscanf(fp,"%s",&shoe.size);
      printf("\nSize(in inchies): ");
      printf("%s\n",shoe.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&shoe.price);
      printf("%f\n",shoe.price);
      fclose(fp);
      printf("\nIf you want to buy this product, press 2 or press 3 else to return to top page.");
      scanf("%d",&button);
    break;

     case 119:
      fp=fopen("punjabee1.txt","r");
      fgets(pun.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(pun.fabric);
      fflush(stdin);
      fgets(pun.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(pun.design);
      fflush(stdin);
      fscanf(fp,"%s",&pun.size);
      printf("\nSize(in inchies): ");
      printf("%s\n",pun.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&pun.price);
      printf("%f\n",pun.price);
      fclose(fp);
      printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
      scanf("%d",&button);
    break;

     case 120:
      fp=fopen("punjabi2.txt","r");
      fgets(pun.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(pun.fabric);
      fflush(stdin);
      fgets(pun.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(pun.design);
      fflush(stdin);
      fscanf(fp,"%s",&pun.size);
      printf("\nSize(in inchies): ");
      printf("%s\n",pun.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&pun.price);
      printf("%f\n",pun.price);
      fclose(fp);
      printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
      scanf("%d",&button);
    break;


     case 121:
      fp=fopen("sharee1.txt","r");
      fgets(shar.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(shar.fabric);
      fflush(stdin);
      fgets(shar.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(shar.design);
      fflush(stdin);
      fscanf(fp,"%s",&shar.size);
      printf("\nSize: ");
      printf("%s\n",shar.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&shar.price);
      printf("%f\n",shar.price);
      fclose(fp);
      printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
      scanf("%d",&button);
    break;

      case 122:
      fp=fopen("sharee2.txt","r");
      fgets(shar.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(shar.fabric);
      fflush(stdin);
      fgets(shar.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(shar.design);
      fflush(stdin);
      fscanf(fp,"%s",&shar.size);
      printf("\nSize: ");
      printf("%s\n",shar.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&shar.price);
      printf("%f\n",shar.price);
      fclose(fp);
      printf("\nIf you want to buy this product, press 2 or press 3 to return to top page.");
      scanf("%d",&button);
      break;
      default:
        printf("Invalid Keyword.");
        exit(0);
        break;
        }
        if(button==1)
        {
            printf("\nEnter brand code:  ");
            scanf("%d",&x);
            printf("\nEnter quantity: ");
            scanf("%f",&y);

        }
        else if(button==2)
        {
            printf("\nEnter brand code:  ");
            scanf("%d",&x);
            printf("\nEnter quantity: ");
            scanf("%f",&y);
            printf("\nEnter size: ");
            scanf("%s",&s);
        }
        else if(button==3)
        {
            goto a;
        }
        if(x==101)
        {
            strcpy(prd[100].name,"A4Tech USB Optical Mouse");
            prd[100].price=280.00;
        }
        else if(x==102)
        {
            strcpy(prd[101].name,"Logitech USB Optical Mouse");
            prd[101].price=330.00;
        }
        else if(x==103)
        {
            strcpy(prd[102].name,"A4Tech USB Keyboard");
            prd[102].price=500.00;
        }
        else if(x==104)
        {
            strcpy(prd[103].name,"Logitech USB Keyboard");
            prd[103].price=550.00;
        }
        else if(x==105)
        {
            strcpy(prd[104].name,"Transcend 8GB USB Pendrive");
            prd[104].price=430.00;
        }
        else if(x==106)
        {
            strcpy(prd[105].name,"Transcend 16GB USB Pendrive");
            prd[105].price=850.00;
        }
        else if(x==107)
        {
            strcpy(prd[106].name,"Rolex Watch");
            prd[106].price=1600.00;
        }
        else if(x==108)
        {
            strcpy(prd[107].name,"G-Shock Watch");
            prd[107].price=8950.00;
        }
        else if(x==109)
        {
            strcpy(prd[108].name,"Curren Watch");
            prd[108].price=1700.00;
        }
        else if(x==110)
        {
            strcpy(prd[109].name,"Fossil Watch");
            prd[109].price=10700;
        }
        else if(x==111)
        {
            strcpy(prd[110].name,"J.Crew T-Shirt");
            prd[110].price=360.00;
        }
        else if(x==112)
        {
            strcpy(prd[111].name,"Richman T-Shirt");
            prd[111].price=400.00;
        }
        else if(x==113)
        {
            strcpy(prd[112].name,"LivingTex Denim Jeans Pant");
            prd[112].price=2200.00;
        }
        else if(x==114)
        {
            strcpy(prd[113].name,"Gabardine Pant");
            prd[113].price=1700.00;
        }
        else if(x==115)
        {
            strcpy(prd[114].name,"Raymond Half Sleeves Shirt");
            prd[114].price=750;
        }
        else if(x==116)
        {
            strcpy(prd[115].name,"Raymond Full Sleeves Shirt");
            prd[115].price=800.00;
        }
        else if(x==117)
        {
            strcpy(prd[116].name,"North Star Sneakers");
            prd[116].price=600.00;
        }
        else if(x==118)
        {
            strcpy(prd[117].name,"Lotto Shoes");
            prd[117].price=900.00;
        }
        else if(x==119)
        {
            strcpy(prd[118].name,"Aarong Printed Punjabee");
            prd[118].price=5900.00;
        }
        else if(x==120)
        {
            strcpy(prd[119].name,"Naborupa Printed Punjabee");
            prd[119].price=3000.00;
        }
        else if(x==121)
        {
            strcpy(prd[120].name,"Aarong Printed Sharee");
            prd[120].price=10500;
        }
        else if(x==122)
        {
            strcpy(prd[121].name,"Naborupa Printed Sharee");
            prd[121].price=2600.00;
        }
        printf("\t\t\t\tMoney Receipt");
        printf("\n\t\t\t________________________");
        printf("\nCustomer Name : %s",cust.name);
        printf("\nCustomer Address : %s",cust.address);
        printf("\nCustomer Contact No : +880%d",cust.mobile_no);
        printf("\nCustomer Email : %s",cust.email);
        if(strcmp(cust.address,"DHAKA")==0)
        {
            df=40.00;
        }
        else
        {
            df=80.00;
        }
        for(i=100;i<122;i++)
        {
            if(x==i+1)
            {
                printf("\nProduct Name: %s",prd[i].name);
                printf("\nPrice: %f",prd[i].price);
                store=prd[i].price;
            }
        }
        if(button==2)
        {
        printf("\nSize: %s",s);
        }
        printf("\nQuantity of Product: %f",y);
        printf("\nDelivery Fee : %f",df);
        printf("\nTotal Cost: %f",store*y+df);
        printf("\n\t\t\t\tThanks for using our Service.");
        printf("\n\nIf you want to buy more products, press 1 to see our  product categories. Press 4 to exit");
        scanf("%d",&z);
        if(z==1)
        {
            goto a;
        }
        else if(z==4)
        {
            printf("\n\t\t\t\tWish you well & visit us again");
            exit(0);
        }

    return 0;
}

void A4Tech_m(struct Digital_Device m1)
{
    printf("Here A4Tech USB Optical Mouse Details: \n");
    FILE *fp;
     fp=fopen("mouse1.txt","r");
    fgets(m1.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(m1.model);
    fflush(stdin);
    fgets(m1.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(m1.type);
    fflush(stdin);
    fscanf(fp,"%d",&m1.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",m1.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&m1.price);
    printf("%f\n",m1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("mouse1.txt","w");
        printf("\nEnter Model: ");
        gets(m1.model);
        fprintf(fp,"%s\n",m1.model);
        printf("\nEnter Type: ");
        gets(m1.type);
        fprintf(fp,"%s\n",m1.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&m1.warranty);
        fprintf(fp,"%d\n",m1.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&m1.price);
        fprintf(fp,"%f\n",m1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }

    }
 void LogiTech_m(struct Digital_Device m2)
 {
     printf("Here LogiTech USB Optical Mouse Details: \n");
     FILE *fp;
     fp=fopen("mouse2.txt","r");
    fgets(m2.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(m2.model);
    fflush(stdin);
    fgets(m2.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(m2.type);
    fflush(stdin);
    fscanf(fp,"%d",&m2.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",m2.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&m2.price);
    printf("%f\n",m2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("mouse2.txt","w");
        printf("\nEnter Model: ");
        gets(m2.model);
        fprintf(fp,"%s\n",m2.model);
        printf("\nEnter Type: ");
        gets(m2.type);
        fprintf(fp,"%s\n",m2.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&m2.warranty);
        fprintf(fp,"%d\n",m2.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&m2.price);
        fprintf(fp,"%f\n",m2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
 }
void A4Tech_k(struct Digital_Device k1)
{
    printf("Here A4Tech USB Keyboard Details: \n");
     FILE *fp;
     fp=fopen("keyboard1.txt","r");
    fgets(k1.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(k1.model);
    fflush(stdin);
    fgets(k1.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(k1.type);
    fflush(stdin);
    fscanf(fp,"%d",&k1.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",k1.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&k1.price);
    printf("%f\n",k1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("keyboard1.txt","w");
        printf("\nEnter Model: ");
        gets(k1.model);
        fprintf(fp,"%s\n",k1.model);
        printf("\nEnter Type: ");
        gets(k1.type);
        fprintf(fp,"%s\n",k1.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&k1.warranty);
        fprintf(fp,"%d\n",k1.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&k1.price);
        fprintf(fp,"%f\n",k1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void LogiTech_k(struct Digital_Device k2)
{
    printf("Here LogiTech USB Keyboard Details: \n");
     FILE *fp;
     fp=fopen("keyboard2.txt","r");
    fgets(k2.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(k2.model);
    fflush(stdin);
    fgets(k2.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(k2.type);
    fflush(stdin);
    fscanf(fp,"%d",&k2.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",k2.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&k2.price);
    printf("%f\n",k2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("keyboard2.txt","w");
        printf("\nEnter Model: ");
        gets(k2.model);
        fprintf(fp,"%s\n",k2.model);
        printf("\nEnter Type: ");
        gets(k2.type);
        fprintf(fp,"%s\n",k2.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&k2.warranty);
        fprintf(fp,"%d\n",k2.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&k2.price);
        fprintf(fp,"%f\n",k2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Trans_8(struct Digital_Device pen1)
{
    printf("Here Transcend 8GB USB Pendrive Details: \n");
     FILE *fp;
     fp=fopen("pendrive1.txt","r");
    fgets(pen1.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(pen1.model);
    fflush(stdin);
    fgets(pen1.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(pen1.type);
    fflush(stdin);
    fscanf(fp,"%d",&pen1.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",pen1.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pen1.price);
    printf("%f\n",pen1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("pendrive1.txt","w");
        printf("\nEnter Model: ");
        gets(pen1.model);
        fprintf(fp,"%s\n",pen1.model);
        printf("\nEnter Type: ");
        gets(pen1.type);
        fprintf(fp,"%s\n",pen1.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&pen1.warranty);
        fprintf(fp,"%d\n",pen1.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&pen1.price);
        fprintf(fp,"%f\n",pen1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Trans_16(struct Digital_Device pen2)
{
    printf("Here Transcend 16GB USB Pendrive Details: \n");
     FILE *fp;
     fp=fopen("pendrive2.txt","r");
    fgets(pen2.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(pen2.model);
    fflush(stdin);
    fgets(pen2.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(pen2.type);
    fflush(stdin);
    fscanf(fp,"%d",&pen2.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",pen2.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pen2.price);
    printf("%f\n",pen2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("pendrive2.txt","w");
        printf("\nEnter Model: ");
        gets(pen2.model);
        fprintf(fp,"%s\n",pen2.model);
        printf("\nEnter Type: ");
        gets(pen2.type);
        fprintf(fp,"%s\n",pen2.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&pen2.warranty);
        fprintf(fp,"%d\n",pen2.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&pen2.price);
        fprintf(fp,"%f\n",pen2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void T_S1(struct Fashion_Wear ts1)
{
    printf("Here J.Crew T-Shirt Details: \n");
     FILE *fp;
      fp=fopen("jcrew.txt","r");
    fgets(ts1.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(ts1.fabric);
    fflush(stdin);
    fgets(ts1.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(ts1.design);
    fflush(stdin);
    fscanf(fp,"%s",&ts1.size);
    printf("\nSize: ");
    printf("%s\n",ts1.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ts1.price);
    printf("%f\n",ts1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("jcrew.txt","w");
        printf("\nEnter Fabric: ");
        gets(ts1.fabric);
        fprintf(fp,"%s\n",ts1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(ts1.design);
        fprintf(fp,"%s\n",ts1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&ts1.size);
        fprintf(fp,"%d\n",ts1.size);
        printf("\nEnter Price: ");
        scanf("%f",&ts1.price);
        fprintf(fp,"%f\n",ts1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void T_S2(struct Fashion_Wear ts2)
{
    printf("Here Richman T-Shirt Details: \n");
     FILE *fp;
     fp=fopen("richman.txt","r");
    fgets(ts2.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(ts2.fabric);
    fflush(stdin);
    fgets(ts2.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(ts2.design);
    fflush(stdin);
    fscanf(fp,"%s",&ts2.size);
    printf("\nSize: ");
    printf("%s\n",ts2.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ts2.price);
    printf("%f\n",ts2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("richman.txt","w");
        printf("\nEnter Fabric: ");
        gets(ts2.fabric);
        fprintf(fp,"%s\n",ts2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(ts2.design);
        fprintf(fp,"%s\n",ts2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&ts2.size);
        fprintf(fp,"%d\n",ts2.size);
        printf("\nEnter Price: ");
        scanf("%f",&ts2.price);
        fprintf(fp,"%f\n",ts2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Pant1(struct Fashion_Wear pan1)
{
    printf("Here LivingTex Denim Jeans Pant Details: \n");
     FILE *fp;
     fp=fopen("livingtex.txt","r");
    fgets(pan1.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(pan1.fabric);
    fflush(stdin);
    fgets(pan1.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(pan1.design);
    fflush(stdin);
    fscanf(fp,"%s",&pan1.size);
    printf("\nSize: ");
    printf("%s\n",pan1.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pan1.price);
    printf("%f\n",pan1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("livingtex.txt","w");
        printf("\nEnter Fabric: ");
        gets(pan1.fabric);
        fprintf(fp,"%s\n",pan1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(pan1.design);
        fprintf(fp,"%s\n",pan1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&pan1.size);
        fprintf(fp,"%d\n",pan1.size);
        printf("\nEnter Price: ");
        scanf("%f",&pan1.price);
        fprintf(fp,"%f\n",pan1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Pant2(struct Fashion_Wear pan2)
{
    printf("Here Gabardine Pant Details: \n");
     FILE *fp;
     fp=fopen("gabardine.txt","r");
    fgets(pan2.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(pan2.fabric);
    fflush(stdin);
    fgets(pan2.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(pan2.design);
    fflush(stdin);
    fscanf(fp,"%s",&pan2.size);
    printf("\nSize: ");
    printf("%s\n",pan2.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&pan2.price);
    printf("%f\n",pan2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("gabardine.txt","w");
        printf("\nEnter Fabric: ");
        gets(pan2.fabric);
        fprintf(fp,"%s\n",pan2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(pan2.design);
        fprintf(fp,"%s\n",pan2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&pan2.size);
        fprintf(fp,"%d\n",pan2.size);
        printf("\nEnter Price: ");
        scanf("%f",&pan2.price);
        fprintf(fp,"%f\n",pan2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void For_S1(struct Fashion_Wear fs1)
{
    printf("Here Raymond Half Sleeves Shirt Details: \n");
     FILE *fp;
     fp=fopen("raymond1.txt","r");
    fgets(fs1.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(fs1.fabric);
    fflush(stdin);
    fgets(fs1.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(fs1.design);
    fflush(stdin);
    fscanf(fp,"%s",&fs1.size);
    printf("\nSize: ");
    printf("%s\n",fs1.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&fs1.price);
    printf("%f\n",fs1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("raymond1.txt","w");
        printf("\nEnter Fabric: ");
        gets(fs1.fabric);
        fprintf(fp,"%s\n",fs1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(fs1.design);
        fprintf(fp,"%s\n",fs1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&fs1.size);
        fprintf(fp,"%d\n",fs1.size);
        printf("\nEnter Price: ");
        scanf("%f",&fs1.price);
        fprintf(fp,"%f\n",fs1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void For_S2(struct Fashion_Wear fs2)
{
    printf("Here Raymond Full Sleeves Shirt Details: \n");
     FILE *fp;
     fp=fopen("raymond2.txt","r");
    fgets(fs2.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(fs2.fabric);
    fflush(stdin);
    fgets(fs2.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(fs2.design);
    fflush(stdin);
    fscanf(fp,"%s",&fs2.size);
    printf("\nSize: ");
    printf("%s\n",fs2.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&fs2.price);
    printf("%f\n",fs2.price);
    fclose(fp);

    printf("If you want to update info, press 1. And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("raymond2.txt","w");
        printf("\nEnter Fabric: ");
        gets(fs2.fabric);
        fprintf(fp,"%s\n",fs2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(fs2.design);
        fprintf(fp,"%s\n",fs2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&fs2.size);
        fprintf(fp,"%d\n",fs2.size);
        printf("\nEnter Price: ");
        scanf("%f",&fs2.price);
        fprintf(fp,"%f\n",fs2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Shoe1(struct Fashion_Wear sh1)
{
    printf("Here North Star Sneaker Details: \n");
     FILE *fp;
     fp=fopen("shoe1.txt","r");
    fgets(sh1.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(sh1.fabric);
    fflush(stdin);
    fgets(sh1.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(sh1.design);
    fflush(stdin);
    fscanf(fp,"%s",&sh1.size);
    printf("\nSize: ");
    printf("%s\n",sh1.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&sh1.price);
    printf("%f\n",sh1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("shoe1.txt","w");
        printf("\nEnter Fabric: ");
        gets(sh1.fabric);
        fprintf(fp,"%s\n",sh1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(sh1.design);
        fprintf(fp,"%s\n",sh1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&sh1.size);
        fprintf(fp,"%d\n",sh1.size);
        printf("\nEnter Price: ");
        scanf("%f",&sh1.price);
        fprintf(fp,"%f\n",sh1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Shoe2(struct Fashion_Wear sh2)
{
    printf("Here Lotto Shoe Details: \n");
     FILE *fp;
     fp=fopen("shoe2.txt","r");
    fgets(sh2.fabric,100,(FILE*)fp);
    printf("\nFabric: ");
    puts(sh2.fabric);
    fflush(stdin);
    fgets(sh2.design,100,(FILE*)fp);
    printf("\nDesign: ");
    puts(sh2.design);
    fflush(stdin);
    fscanf(fp,"%s",&sh2.size);
    printf("\nSize: ");
    printf("%s\n",sh2.size);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&sh2.price);
    printf("%f\n",sh2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("shoe2.txt","w");
        printf("\nEnter Fabric: ");
        gets(sh2.fabric);
        fprintf(fp,"%s\n",sh2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(sh2.design);
        fprintf(fp,"%s\n",sh2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&sh2.size);
        fprintf(fp,"%d\n",sh2.size);
        printf("\nEnter Price: ");
        scanf("%f",&sh2.price);
        fprintf(fp,"%f\n",sh2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Punj1(struct Fashion_Wear pun1)
{
    printf("Here Aarong Printed Punjabi Details: \n");
     FILE *fp;
      fp=fopen("punjabee1.txt","r");
      fgets(pun1.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(pun1.fabric);
      fflush(stdin);
      fgets(pun1.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(pun1.design);
      fflush(stdin);
      fscanf(fp,"%s",&pun1.size);
      printf("\nSize(in inchies): ");
      printf("%s\n",pun1.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&pun1.price);
      printf("%f\n",pun1.price);
      fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("punjabee1.txt","w");
        printf("\nEnter Fabric: ");
        gets(pun1.fabric);
        fprintf(fp,"%s\n",pun1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(pun1.design);
        fprintf(fp,"%s\n",pun1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&pun1.size);
        fprintf(fp,"%d\n",pun1.size);
        printf("\nEnter Price: ");
        scanf("%f",&pun1.price);
        fprintf(fp,"%f\n",pun1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Punj2(struct Fashion_Wear pun2)
{
    printf("Here Naborupa Printed Punjabi Details: \n");
     FILE *fp;
      fp=fopen("punjabi2.txt","r");
      fgets(pun2.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(pun2.fabric);
      fflush(stdin);
      fgets(pun2.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(pun2.design);
      fflush(stdin);
      fscanf(fp,"%s",&pun2.size);
      printf("\nSize(in inchies): ");
      printf("%s\n",pun2.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&pun2.price);
      printf("%f\n",pun2.price);
      fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("punjabi2.txt","w");
        printf("\nEnter Fabric: ");
        gets(pun2.fabric);
        fprintf(fp,"%s\n",pun2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(pun2.design);
        fprintf(fp,"%s\n",pun2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&pun2.size);
        fprintf(fp,"%d\n",pun2.size);
        printf("\nEnter Price: ");
        scanf("%f",&pun2.price);
        fprintf(fp,"%f\n",pun2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Shar1(struct Fashion_Wear shr1)
{
    printf("Here Aarong Printed Sharee Details: \n");
     FILE *fp;
     fp=fopen("sharee1.txt","r");
      fgets(shr1.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(shr1.fabric);
      fflush(stdin);
      fgets(shr1.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(shr1.design);
      fflush(stdin);
      fscanf(fp,"%s",&shr1.size);
      printf("\nSize: ");
      printf("%s\n",shr1.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&shr1.price);
      printf("%f\n",shr1.price);
      fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("sharee1.txt","w");
        printf("\nEnter Fabric: ");
        gets(shr1.fabric);
        fprintf(fp,"%s\n",shr1.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(shr1.design);
        fprintf(fp,"%s\n",shr1.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&shr1.size);
        fprintf(fp,"%d\n",shr1.size);
        printf("\nEnter Price: ");
        scanf("%f",&shr1.price);
        fprintf(fp,"%f\n",shr1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void Shar2(struct Fashion_Wear shr2)
{
    printf("Here Naborupa Printed Sharee Details: \n");
     FILE *fp;
     fp=fopen("sharee2.txt","r");
      fgets(shr2.fabric,100,(FILE*)fp);
      printf("\nFabric: ");
      puts(shr2.fabric);
      fflush(stdin);
      fgets(shr2.design,100,(FILE*)fp);
      printf("\nDesign: ");
      puts(shr2.design);
      fflush(stdin);
      fscanf(fp,"%s",&shr2.size);
      printf("\nSize: ");
      printf("%s\n",shr2.size);
      printf("\nPrice(in taka): ");
      fscanf(fp,"%f",&shr2.price);
      printf("%f\n",shr2.price);
      fclose(fp);

      printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("sharee2.txt","w");
        printf("\nEnter Fabric: ");
        gets(shr2.fabric);
        fprintf(fp,"%s\n",shr2.fabric);
        fflush(stdin);
        printf("\nEnter Design: ");
        gets(shr2.design);
        fprintf(fp,"%s\n",shr2.design);
        fflush(stdin);
        printf("\nEnter Size: ");
        scanf("%d",&shr2.size);
        fprintf(fp,"%d\n",shr2.size);
        printf("\nEnter Price: ");
        scanf("%f",&shr2.price);
        fprintf(fp,"%f\n",shr2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void M_W1(struct Digital_Device mw1)
{
    printf("Here Rolex Watch Details: \n");
     FILE *fp;
     fp=fopen("rolex.txt","r");
    fgets(mw1.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(mw1.model);
    fflush(stdin);
    fgets(mw1.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(mw1.type);
    fflush(stdin);
    fscanf(fp,"%d",&mw1.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",mw1.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&mw1.price);
    printf("%f\n",mw1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("rolex.txt","w");
        printf("\nEnter Model: ");
        gets(mw1.model);
        fprintf(fp,"%s\n",mw1.model);
        printf("\nEnter Type: ");
        gets(mw1.type);
        fprintf(fp,"%s\n",mw1.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&mw1.warranty);
        fprintf(fp,"%d\n",mw1.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&mw1.price);
        fprintf(fp,"%f\n",mw1.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void M_W2(struct Digital_Device mw2)
{
    printf("Here G-Shock Watch Details: \n");
     FILE *fp;
    fp=fopen("gShock.txt","r");
    fgets(mw2.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(mw2.model);
    fflush(stdin);
    fgets(mw2.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(mw2.type);
    fflush(stdin);
    fscanf(fp,"%d",&mw2.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",mw2.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&mw2.price);
    printf("%f\n",mw2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("gShock.txt","w");
        printf("\nEnter Model: ");
        gets(mw2.model);
        fprintf(fp,"%s\n",mw2.model);
        printf("\nEnter Type: ");
        gets(mw2.type);
        fprintf(fp,"%s\n",mw2.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&mw2.warranty);
        fprintf(fp,"%d\n",mw2.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&mw2.price);
        fprintf(fp,"%f\n",mw2.price);
        fclose(fp);
    }
     exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void W_W1(struct Digital_Device ww1)
{
    printf("Here Curren Watch Details: \n");
     FILE *fp;
    fp=fopen("curren.txt","r");
    fgets(ww1.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww1.model);
    fflush(stdin);
    fgets(ww1.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww1.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww1.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww1.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww1.price);
    printf("%f\n",ww1.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("curren.txt","w");
        printf("\nEnter Model: ");
        gets(ww1.model);
        fprintf(fp,"%s\n",ww1.model);
        printf("\nEnter Type: ");
        gets(ww1.type);
        fprintf(fp,"%s\n",ww1.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&ww1.warranty);
        fprintf(fp,"%d\n",ww1.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&ww1.price);
        fprintf(fp,"%f\n",ww1.price);
        fclose(fp);
    }
    exit(0);
    if(d==2)
    {
        exit(0);
    }
}
void W_W2(struct Digital_Device ww2)
{
    printf("Here Fossil Watch Details: \n");
     FILE *fp;
    fp=fopen("fossil.txt","r");
    fgets(ww2.model,100,(FILE*)fp);
    printf("\nModel: ");
    puts(ww2.model);
    fflush(stdin);
    fgets(ww2.type,100,(FILE*)fp);
    printf("\nType: ");
    puts(ww2.type);
    fflush(stdin);
    fscanf(fp,"%d",&ww2.warranty);
    printf("\nWarranty(in years): ");
    printf("%d\n",ww2.warranty);
    printf("\nPrice(in taka): ");
    fscanf(fp,"%f",&ww2.price);
    printf("%f\n",ww2.price);
    fclose(fp);

    printf("If you want to update info, press 1 . And press 2 to exit");
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        fp=fopen("fossil.txt","w");
        printf("\nEnter Model: ");
        gets(ww2.model);
        fprintf(fp,"%s\n",ww2.model);
        fflush(stdin);
        printf("\nEnter Type: ");
        gets(ww2.type);
        fprintf(fp,"%s\n",ww2.type);
        printf("\nEnter Warranty: ");
        scanf("%d",&ww2.warranty);
        fprintf(fp,"%d\n",ww2.warranty);
        printf("\nEnter Price: ");
        scanf("%f",&ww2.price);
        fprintf(fp,"%f\n",ww2.price);
        fclose(fp);
    }
    exit(0);
    if(d==2)
    {
        exit(0);
    }
}






