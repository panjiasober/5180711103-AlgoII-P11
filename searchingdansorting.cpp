#include <iostream>
using namespace :: std;
main()
{
    string name,member,id;
    string nama[5]{"Bayu","Irvan","Susanti","Diana","Roni"};
    string nomor[5]{"A001","A002","A003","A007","A008"};
    int jumlah,j,jml[10],total=0,h,harga[10],ketemu,hasil;
    int tmp;
    cout<<"======================== PROGRAM KASIR ==========================================="<<endl;
    cout<<"\n\nApakah Anda Member ya/bukan?";
    cin>>member;
    //searching
    if(member=="ya")
    {
        cout<<"Masukan Id:";
        cin>>id;
        ketemu=0;
        for(int i=0;i<5;i++)
        {
            if(id == nomor[i])
            {
                ketemu=1;
                cout<<"Nama Member:"<<nama[i];
            }
        }
        //sorting
        cout<<"\nMasukan Jumlah :";
        cin>>jumlah;
        for(int i=1;i<=jumlah;i++)
        {
            cout<<"Masukan Harga :Rp.";
            cin>>harga[i];
            cout<<"Masukan Jumlah barang:";
            cin>>jml[i];
            j=jml[i]*harga[i];
            total=total+j;
        }
        cout<<"Total:Rp."<<total<<endl;
        cout<<"Anda Mendapatkan Diskon 5%"<<endl;
        hasil=total*0.05;
        cout<<"Total Setelah Diskon:Rp."<<hasil<<endl;
        for(int i=1;i<=jumlah;++i)
        {
            for(int j=1;j<=(jumlah-i);++j)
                if(harga[j]>harga[j+1])
                {
                    tmp=harga[j];
                    harga[j]=harga[j+1];
                    harga[j+1]=tmp;
                }
        }
        //sorting
        cout<<"Harga Diurutkan Dari termurah-termahal:"<<endl;
        for(int i=1;i<=jumlah;i++)
        cout<<"Rp."<<harga[i]<<endl;
        cout<<"Jumlah Belanjaan:"<<jumlah<<endl;
        cout<<"Total Harga Sebelum Di Diskon:Rp."<<total<<endl;
        cout<<"Total Harga Di Diskon:Rp."<<hasil<<endl;


    }
    else if(member=="bukan")
    {
        cout<<"\nMasukan Nama:";
        cin>>name;
        cout<<"\nMasukan Jumlah Barang:";
        cin>>jumlah;
        for(int i=1;i<=jumlah;i++)
        {
            cout<<"Masukan Harga Barang ke-"<<i<<"Rp.";
            cin>>harga[i];
            cout<<"Masukan Jumlah ke-"<<i<<":";
            cin>>jml[i];
            j=jml[i]*harga[i];
            total=total+j;
        }
         cout<<"Total:Rp."<<total;

    }

}
