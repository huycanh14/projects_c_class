

#include<iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;
class sinhvien
{
public:
    string hoten;
    int ngay, thang, toan, ly, hoa, gioiting, nam;
    float dtb;
public:
    void nhapsv();
    void insv();
    int diemtrungbinh();
};
void sinhvien::nhapsv()
{
    cin.ignore();
    cout<<"======================================================";
    cout<<"Nhap ho ten sinh vien  : ";
    getline(cin,hoten);
    cout<<"Nhap vao ngay/thang/nam sinh : ";
    cin>>ngay;
    cin>>thang;
    cin>>nam;
    cout<<"Nhap vao diem Toan :";
    cin>>toan;
    cout<<"Nhap vao diem Ly :";
    cin>>ly;
    cout<<"Nhap vao diem Hoa :";
    cin>>hoa;
}
void sinhvien::insv()
{
    cout<<"======================================================";
    cout<<"Ho va ten sinh vien : " <<hoten;
    cout<<"\nNgay thang nam sinh " <<ngay<<"/"<<thang<<"/"<<nam;
    cout<<"\nDiem Toan : "<<toan<<". Diem Ly : "<<ly<<". Diem hoa : "<<hoa<<".";
    printf("\nDiem trung binh mon la %1.1f \n",dtb);
}
int sinhvien::diemtrungbinh()
{
    dtb=(toan+ly+hoa)/3;
    return(dtb);
}

int main()
{
    sinhvien *p;
    int i, n, j;
    cout<<"Nhap vao so sinh vien : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Nhap vao thong tin sinh vien thu "<<i+1;
        p[i].nhapsv();
        p[i].diemtrungbinh();
    }
    for(i=0;i<n;i++)
    {
        p[i].insv();
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
            if(p[i].dtb>p[j].dtb)
            {
                sinhvien temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
    }
}
