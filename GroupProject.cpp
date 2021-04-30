#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <string>


using namespace std;

class B{

protected:
    int op;
    int option1,option2,option3;
    string mainAdmin[2];
    string mainAdminTake;
    string subAdmin[2];
    string subAdminTake;
    string member[2];
    string memberList;
    string help[100];
    string help2[1000];
    string help3[1000];
    string help4[1000];
    string help5[1000];
    string help6[1000];
    string help7[1000];
    string help8[1000];
    string help9[1000];
    string help10[1000];
    string help11[1000];
    string help12[1000];
    string help13[1000];
    int option5;
public:
        int allClubList(){
            int club;
            string ALLClub;
            ifstream Club("Club.txt");
            int i=1;
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== All Club Name ===============================\n\n\n\t\t";

            while(getline(Club,ALLClub)){

                cout<<"                  "<<i<<": "<<ALLClub<<"                      ";
                if(i%2==0){
                    cout<<endl<<"\t\t";

                }
                i++;


            }
            return i;

    }
    void setName(){
        int l=0;
        while(true){

            if(l>0){
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Main Admin Login Section ===============================\n\n\n";
            }

            cout<<"\n\n\t\t\t\t\t\t|\tEnter your name     : ";
            getline(cin,mainAdmin[0]);

            if(mainAdmin[0]==""){

                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct name! ";
                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                Sleep(3000);
                system("CLS");
                l++;
                continue;

            }
            break;


        }
    }
    void setPass(){
       // int l=0;
        while(true){

            cout<<"\n\t\t\t\t\t\t|\tEnter your Password : ";
            getline(cin,mainAdmin[1]);

            if(mainAdmin[1]==""){

                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct Pass! ";
                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                continue;

            }
            break;

        }


    }
    void setName(int i){
        int l=0;
        while(true){

            if(l>0){
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Club Admin Login Section ===============================\n\n\n";
            }

            cout<<"\n\n\t\t\t\t\t\t|\tEnter your name     : ";
            getline(cin,subAdmin[0]);

            if(subAdmin[0]==""){

                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct name! ";
                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                Sleep(3000);
                system("CLS");
                l++;
                continue;

            }
            break;


        }

    }
    void setPass(int i){
           while(true){

                cout<<"\n\t\t\t\t\t\t|\tEnter your Password : ";
                getline(cin,subAdmin[1]);

                if(subAdmin[1]==""){

                    cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                    cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct Pass! ";
                    cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                    //Sleep(3000);
                    //system("CLS");
                    //l++;
                    continue;

                }
                break;

        }
    }
    void setName(int j,int k){


        int l=0;
        while(true){
cout<<"\n\n\t\t\t==================================================================================================\n\n\n\n";
 cout<<"\t\t\t                 ccccc    ccccc  cccccccccc  ccccc    ccccc  ccccc    ccccccccc  cccccc           \n";
 cout<<"\t\t\t                 ccc cc  cc ccc  ccc         ccc cc  cc ccc  ccc  cc  ccc        ccc  cc          \n";
 cout<<"\t\t\t                 ccc   cc   ccc  cccccc      ccc   cc   ccc  cccccc   cccccc     cccccc           \n";
 cout<<"\t\t\t                 ccc        ccc  ccc         ccc        ccc  ccc  cc  ccc        ccc  ccc         \n";
 cout<<"\t\t\t                 ccc        ccc  cccccccccc  ccc        ccc  cccccc   ccccccccc  ccc   ccc        \n";
 cout<<"\t\t\t                                                                                                  \n";
 cout<<"\t\t\t                      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                        \n";
 cout<<"\t\t\t                      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                        \n";
 cout<<"\t\t\t                      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                        \n";
 cout<<"\t\t\t                      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                        \n";
 cout<<"\t\t\t                      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                  \n";
 //cout<<"\t\t\t==================================================================================================\n\n\n\n";
            cout<<"\n\n\n\n\t\t\t\t=============================== Member Login Section ===============================\n\n\n";



            cout<<"\n\n\t\t\t\t\t\t|\tEnter your name     : ";
            getline(cin,member[0]);

            if(member[0]==""){

                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct name! ";
                cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                Sleep(3000);
                system("CLS");
                l++;
                continue;

            }
            break;


        }



    }
    void setPass(int j,int k){

          while(true){

                cout<<"\n\t\t\t\t\t\t|\tEnter your Password : ";
                getline(cin,member[1]);

                if(member[1]==""){

                    cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n";
                    cout<<"\n\n\t\t\t\t\t\t\t\tEnter a Correct Pass! ";
                    cout<<"\n\n\n\t\t\t\t\t===================================================================\n\n\n";
                    //Sleep(3000);
                    //system("CLS");
                    //l++;
                    continue;

                }
                break;

        }

    }

};


class  A : public B {

public:

    A(){
system("Color 0B");

    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t============================================================================================================\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||    ccc             ccc   ccccccccc   ccc        ccccccccc  ccccccccc  cccccc   cccccc  ccccccccc        ||\n";
    cout<<"\t\t\t\t||     ccc    ccc    ccc    ccc         ccc        ccc        ccc   ccc  ccc ccc ccc ccc  ccc              ||\n";
    cout<<"\t\t\t\t||      ccc ccc ccc ccc     cccccc      ccc        ccc        ccc   ccc  ccc  ccccc  ccc  cccccc           ||\n";
    cout<<"\t\t\t\t||       ccccc   ccccc      ccc         ccc        ccc        ccc   ccc  ccc    cc   ccc  ccc              ||\n";
    cout<<"\t\t\t\t||        ccc     ccc       ccccccccc   ccccccccc  ccccccccc  ccccccccc  ccc         ccc  ccccccccc        ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                         ccccccccc  ccccccccc                                            ||\n";
    cout<<"\t\t\t\t||                                            ccc     ccc   ccc                                            ||\n";
    cout<<"\t\t\t\t||                                            ccc     ccc   ccc                                            ||\n";
    cout<<"\t\t\t\t||                                            ccc     ccccccccc                                            ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||    cccccc  cc  cc  ccccc              cccccc  ccccc   cccccc      cc cccccc cccccc  cccccc              ||\n";
    cout<<"\t\t\t\t||    cc  cc  cc  cc  cc   c             cc   c  cc   c  cc  cc      cc cc     cc        cc                ||\n";
    cout<<"\t\t\t\t||    cc  cc  cc  cc  cc cc              cc cc   cc cc   cc  cc      cc cccc   cc        cc                ||\n";
    cout<<"\t\t\t\t||    cc  cc  cc  cc  cc  cc             cc      cc  cc  cc  cc      cc cc     cc        cc                ||\n";
    cout<<"\t\t\t\t||    cccccc  cccccc  cc   cc            cc      cc   cc cccccc  cccccc cccccc cccccc    cc                ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t||                                                                                                         ||\n";
    cout<<"\t\t\t\t============================================================================================================\n";
    Sleep(3000);



    string l="|";
    for(int i=1;i<101;i=i+2){
        l+="|";

        cout<<"\n";
        cout<<"\n";
        cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t-----------------------------------------------------\n";
        cout<<"\t\t\t\t\t\t\t|"<<l<<"|\n";
        cout<<"\t\t\t\t\t\t\t-----------------------------------------------------\n";
        cout<<"\t\t\t\t\t\t\t"<<i<<"%";

        Sleep(100);
        system("CLS");


    }

    }




    void showAdmin(){

            system("CLS");
            string subAdminName;

            ifstream subAdmin("subAdmin.txt");
            int i=0;

 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t================================================== Admin Control Section ==============================================\n\n\n\t\t\t";
            cout<<"\t\tName\t\t\t\tId\t\t\t\tClub Number \n\n\n\t\t\t";
            while(getline(subAdmin,subAdminName)){

                    if(i>0){
                        cout<<"\t\t"<<subAdminName<<"\t\t\t";
                    }
                    if(i>0 && i%3==0){
                        cout<<endl<<"\t\t\t";
                    }
                    i++;

                }

                cout<<"\n\n\n\t\t\t\t======================================================================================================================\n\n\n";
                int cl;
                cout<<"\n\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){
                    file();
                }
    }
    void addClub(){
            system("CLS");
            string clubName,nameq;
            getline(cin,nameq);
            ofstream Club;
            Club.open("Club.txt",ios::out|ios::app);
            cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 //cout<<"\n\n\t\t\t============================================================= About ME ===================================================\n\n";
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t============================================= Admin Control Section ==========================================\n\n\n";
            cout<<"\n\t\t\t\t\t\t\tEnter A Club name: ";

            getline(cin,clubName);
            Club<<clubName<<endl;
            cout<<"\n\n\n\n\n\t\t\t\t\t\t\tSuccessfully created a club! n\n\n";
            cout<<"\n\n\n\n\n\n\t\t\t\t=====================================================================================\n\n\n";
            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
            if(cl==1){
                file();
            }

    }
    void addAdmin(){
addadmin:
            system("CLS");
            int club;

            int i=allClubList();
            cout<<"\n\n\n\n\n\t\t\t\t=============================== Admin Control Section ===============================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\tIn which club want to add an admin: ";
            cout<<"\n\n\t\t\t\t\t\tChoose a Club: ";
            cin>>club;

            if(club<=i-1){
                system("CLS");
            cout<<"\n\n\n\n\n\t\t\t\t=============================== Admin Control Section ===============================\n\n\n\n\n\n\n";
                string name,nameq;
                getline(cin,nameq);
                string id;
                ofstream subadmin;
                subadmin.open("subAdmin.txt",ios::out|ios::app);
                cout<<"\n\t\t\t\t\t\t\tEnter Admin name : ";
                getline(cin,name);
                cout<<"\n\t\t\t\t\t\t\tEnter admin id: ";
                getline(cin,id);






            //system("CLS");
            string subAdminName;

            ifstream subAdmin("subAdmin.txt");
            int i=0;
            while(getline(subAdmin,subAdminName)){

                    if(i>0){
                        help10[i]=subAdminName;
                    }
                    i++;

                }
                for(int j=1;j<1000;j=j+3){

                    if(help10[j+1]==id){

                          cout<<"\n\n\n\n\n\t\t\t\t===============================================================================\n";
                          cout<<"\n\n\n\n\t\t\t\t\t\tThere is an admin in that name!!\n\n\n\n";
                          cout<<"\n\t\t\t\t===============================================================================\n";
                          Sleep(4000);
                          goto addadmin;

                    }

                }



                subadmin<<name<<endl;
                subadmin<<id<<endl;
                subadmin<<club<<endl;
                cout<<"\n\n\n\t\t\t\t\t\t\tSuccessfully Added a New Admin";
                cout<<"\n\n\n\n\n\t\t\t\t=================================================================================\n\n\n";
            }
            else{
                cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter a valid club number!\n";
            }
            int cl;
            cout<<"\n\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){
                file();
            }

    }
    void addMember(){
        system("CLS");

        int club;
        int i=allClubList();
        cout<<"\n\n\n\n\t\t\t\t=================================================================================\n\n\n";
        cout<<"\n\t\t\t\t\t\tIn which club do you want to add a member!";
        cout<<"\n\n\t\t\t\t\t\tChoose a Club: ";
        cin>>club;
        system("CLS");


    if(club<=i-1){

            string name,nameq;
            getline(cin,nameq);
            string id;
            string department;
            int joinDate;

            cout<<"\n\n\n\n\n\t\t\t\t=============================== Member Create Section ===============================\n\n\n\n";
            ofstream member;
            member.open("Member.txt",ios::out|ios::app);
            cout<<"\n\n\n\t\t\t\t\t\t|\tEnter Member name: ";
            getline(cin,name);
            cout<<"\n\t\t\t\t\t\t|\tEnter Member id: ";
            getline(cin,id);

                        //system("CLS");
            string MemberName;

            ifstream Member("Member.txt");
            int i=1;
            while(getline(Member,MemberName)){

                    help12[i]=MemberName;
                    i++;

                }
                for(int j=1;j<1000;j=j+5){

                    if(help12[j+1]==id){

                          cout<<"\n\n\n\n\n\t\t\t\t===============================================================================\n";
                          cout<<"\n\n\n\n\t\t\t\t\t\tThere is a Member in that name!!\n\n\n\n";
                          cout<<"\n\t\t\t\t===============================================================================\n";
                          Sleep(4000);
                          addMember();

                    }

                }




            cout<<"\n\t\t\t\t\t\t|\tEnter your department Name: ";
            getline(cin,department);
            cout<<"\n\t\t\t\t\t\t|\tEnter your Join Date: ";
            cin>>joinDate;



            member<<name<<endl;
            member<<id<<endl;
            member<<"Department Name: "<<department<<endl;
            member<<"Joining Date: "<<joinDate<<"/12/2020"<<endl;
            member<<club<<endl;
            cout<<"\n\n\n\t\t\t\t\t\tSuccessfully Added A member!";
            cout<<"\n\n\n\n\n\t\t\t\t=====================================================================================\n\n\n\n";

    }
    else{
        cout<<"\n\n\t\t\t\t\t\t\tEnter a Valid club Number\n";
    }

    int cl;
    cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
    cin>>cl;
    if(cl==1){
        generalMember();
    }

}
    void searchMember(){
    system("CLS");

            int option7;
            string member[2];
            string memberList;
            string unknown;
            getline(cin,unknown);
           cout<<"\n\n\n\n\n\t\t\t\t=============================== Member Create Section ===============================\n\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\tEnter member name: ";
            getline(cin,member[0]);
            cout<<"\n\t\t\t\t\t\t|\tEnter member id: ";
            getline(cin,member[1]);

            ifstream Member("Member.txt");


            int i=0;
            while(getline(Member,memberList)){
                help3[i]=memberList;
                i++;
            }

            for(int i=0;i<1000;i=i+5){

                if(help3[i]==member[0] && help3[i+1]==member[1]){

                    system("CLS");
                    cout<<"\n\n\n\n\n";
                    cout<<"\n\n\n\t\t\t\t=====================================Member Details====================================\n\n\n";
                    cout<<"\n\t\t\t\t\t\t|\tMember name: "<<help3[i]<<endl<<"\n\t\t\t\t\t\t|\tMember id: "<<help3[i+1]<<endl<<"\n\t\t\t\t\t\t|\t"<<help3[i+2]<<endl<<"\n\t\t\t\t\t\t|\t"<<help3[i+3]<<endl<<"\n\t\t\t\t\t\t|\tClub Number: "<<help3[i+4]<<endl;
                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";

                }

            }

            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){
                generalMember();
            }

    }
    void viewCommittee(){
    system("CLS");

    string committee;
    ifstream Committee("Committee.txt");
    cout<<"\n\n\n\t\t\t\t=================================== All Committee Member ================================\n\n\n";
    int k=0;
    while(getline(Committee,committee)){
        if(k>0){
            cout<<"\t\t"<<committee<<"\t\t\t";
            if(k%3==0){

                cout<<endl;

            }

        }

        k++;

    }
     cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
    }
    void viewAdvisor(){
        system("CLS");
        cout<<"\n\n\n\t\t\t\t=============================== ALL Advisory Member ===============================\n\n\n";
        string advisor;
        ifstream Advisor("Advisory.txt");
    int k=1;
    while(getline(Advisor,advisor)){

            cout<<"\t\t\t"<<advisor<<"\t\t\t";
            if(k%3==0){

                cout<<endl;

            }
        k++;


    }
    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
}

void addCommittee(int club){
            system("CLS");
            string name1[1000];
            string name2[1000];
            string name3,name4;
            string name,nameq;
            getline(cin,nameq);
            string id;

            ofstream Committee;
            Committee.open("Committee.txt",ios::out|ios::app);
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Add Committee ===============================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Admin name : ";
            getline(cin,name);


            ifstream subadmin("subAdmin.txt");
            int i=0;
            while(getline(subadmin,name3)){

                    name1[i]=name3;
                    i++;

            }
            for(int j=1;j<1000;j=j+3){

                if(j==322){
                    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t============================================================================\n\n\n";
                    cout<<"\n\t\t\t\t\tChoose a valid admin which is in a sub admin position\n";
                    cout<<"\n\n\t\t\t\t============================================================================\n\n\n";
                    break;
                }

                if(name1[j]==name){

                    cout<<"\n\n\t\t\t\t\t\t|\tEnter admin id: ";
                    getline(cin,id);
                    Committee<<name<<endl;
                    Committee<<id<<endl;
                    Committee<<club<<endl;
                    cout<<"\n\n\t\t\t\t\t\tSuccessFully Added A committee Member\n";
                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n";
                    break;

                }


                        }

}
    void addAdvisor(int club){
                        system("CLS");
                        string name1[1000];
                        string name2[1000];
                        string name3,name4;
                        string name,nameq;
                        getline(cin,nameq);
                        string id;
                        ofstream Advisory;
                        Advisory.open("Advisory.txt",ios::out|ios::app);
                        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t|\tEnter Admin name : ";
                        getline(cin,name);
                        ifstream subadmin("subAdmin.txt");
                        int i=0;
                        while(getline(subadmin,name4)){

                            name2[i]=name4;
                            i++;

                        }
                        for(int j=1;j<1000;j=j+3){

                            if(j==322){
                                cout<<"\n\n\n\t\t\t\t============================================================================\n\n\n";
                                cout<<"\n\t\t\t\t\tChoose a valid admin which is in a sub admin position\n";
                                cout<<"\n\n\t\t\t\t============================================================================\n\n\n";
                                break;

                            }

                            if(name2[j]==name){

                                cout<<"\n\t\t\t\t\t\t\tEnter admin id: ";
                                getline(cin,id);
                                Advisory<<name<<endl;
                                Advisory<<id<<endl;
                                Advisory<<club<<endl;
                                cout<<"\n\n\t\t\t\t\t\tSuccessfully Added an Advisor Member";
                                cout<<"\n\n\n\t\t\t\t===================================================================================\n";
                                break;

                            }

                        }

}
    void mainAdminAddEvent(){


            string eventDetails;
            string eventDate;


            string eventName;
            string notRequired;
            string notRequired2;
            getline(cin,notRequired);

date2:
            system("CLS");
            ofstream Event;
            Event.open("Event.txt",ios::out|ios::app);

            cout<<"\n\n\n\t\t\t\t===================================== Event ====================================\n";
            cout<<"\n\n\n\t\t\t\t\t\t|\tEnter an event name: ";
            getline(cin,eventName);

            int club;

    int i=allClubList();

    cout<<"\n\t\t\t\t\t\tIn which club do you want to add an Event!";
    cout<<"\n\n\t\t\t\t\t\tChoose a Club: ";
    cin>>club;

    if(club<=i-1){

            system("CLS");
            getline(cin,notRequired);
            cout<<"\n\n\n\n\n\t\t\t\t===================================== Event ====================================\n";
            cout<<"\n\n\n\t\t\t\t\t\t|\tEnter Event details: ";
            getline(cin,eventDetails);
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Event Date: ";
            getline(cin,eventDate);

                int i=0;
                string eventDate2;
                ifstream EventTake("Event.txt");

                while(getline(EventTake,eventDate2)){
                    if(i>0){

                        help9[i]=eventDate2;

                    }

                    i++;

                }
                for(int j=1;j<1000;j=j+4){


                    if(help9[j+2]==eventDate){

                          cout<<"\n\n\n\n\n\t\t\t\t===============================================================================\n";
                          cout<<"\n\n\n\n\t\t\t\t\tIn that date already have an event Choose an event in another date!\n\n\n\n";
                          cout<<"\n\t\t\t\t===============================================================================\n";
                          Sleep(4000);
                          goto date2;

                    }

                }





            Event<<eventName<<endl;
            Event<<eventDetails<<endl;
            Event<<eventDate<<endl;
            Event<<club<<endl;
            cout<<"\n\n\n\t\t\t\t\t\t\t\tSuccessFully Added an Event! \n";
            cout<<"\n\n\n\n\t\t\t\t=============================================================================\n";

    }
    else{
        cout<<"\n\n\n\n\n\t\t\t\t=============================================================================\n";
        cout<<"\n\t\t\t\t\t\t\tClub number is wrong\n";
        cout<<"\n\n\n\n\t\t\t\t=============================================================================\n";

    }



            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                event();

            }

}
    void clubAdminAddEvent(){
date:
                system("CLS");
                string eventDetails;
                string eventDate;

                ofstream Event;
                Event.open("Event.txt",ios::out|ios::app);

                string eventName;
                string notRequired;
                string notRequired2;
                getline(cin,notRequired);

                cout<<"\n\n\n\n\n\t\t\t\t==================================== Event ===================================\n";
                cout<<"\n\n\t\t\t\t\t\tEnter an event name: ";
                getline(cin,eventName);


                int club;
                int i=allClubList();
                cout<<"\n\n\n\t\t\t\t===========================================================================\n";
                cout<<"\n\t\t\t\t\t\tIn which club do you want to add an event!";
                cout<<"\n\n\t\t\t\t\t\tChoose a Club: ";
                cin>>club;

        if(club<=i-1){

                system("CLS");
                getline(cin,notRequired);
                cout<<"\n\n\n\n\n\t\t\t\t========================================== Event =========================================\n";
                cout<<"\n\n\t\t\t\t\t\tEnter Event details: ";
                getline(cin,eventDetails);
                cout<<"\n\n\t\t\t\t\t\tEnter Event Date: ";
                cin>>eventDate;

                int i=0;
                string eventDate2;
                ifstream EventTake("Event.txt");

                while(getline(EventTake,eventDate2)){
                    if(i>0){

                        help11[i]=eventDate2;

                    }

                    i++;

                }
                for(int j=1;j<1000;j=j+4){


                    if(help11[j+2]==eventDate){

                          cout<<"\n\n\n\n\n\t\t\t\t=============================================================================\n";
                          cout<<"\n\n\n\n\t\t\t\t\tIn that date already have an event Choose an event in another date!\n\n\n\n";
                          cout<<"\n\t\t\t\t=============================================================================\n";
                          Sleep(4000);
                          goto date;

                    }

                }

                Event<<eventName<<endl;
                Event<<eventDetails<<endl;
                Event<<eventDate<<endl;
                Event<<club<<endl;
                cout<<"\n\n\n\t\t\t\t\t\t\t\tSuccessFully Added an Event! \n";
                cout<<"\n\n\n\t\t\t\t==================================================================================\n";

        }
        else{

            cout<<"\n\t\t\t\t\t\t\tClub number is wrong";

        }



            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                 clubAdminControl(1);

            }

}

/*void memberAddEvent(){

                        string eventDetails;
                        int eventDate;

              ofstream Event;
              Event.open("Event.txt",ios::out|ios::app);

                 string eventName;
                 string notRequired;
                 string notRequired2;
                 getline(cin,notRequired);
                 cout<<"\n\n\t\t\t\t\t\t\tEnter an event name: ";
                 getline(cin,eventName);


                 int club;

             string ALLClub;

                ifstream Club("Club.txt");
                int i=0;
                cout<<"\n\n\n\n";
                while(getline(Club,ALLClub)){

                   cout<<"\t\t\t\t\t\t\t"<<i<<": "<<ALLClub<<endl;
                    i++;

                }

    cout<<"\n\t\t\t\t\t\t|\tIn which club do you want to add an event!";
    cout<<"\n\t\t\t\t\t\t\tChoose a Club: ";
    cin>>club;

    if(club<=i-1){
            system("CLS");
            getline(cin,notRequired);
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Event details: ";
            getline(cin,eventDetails);
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Event Date: ";
            cin>>eventDate;
            Event<<eventName<<endl;
            Event<<eventDetails<<endl;
            Event<<eventDate<<endl;
            Event<<club<<endl;

    }
    else{
        cout<<"\n\t\t\t\t\t\t\tClub number is wrong";

    }



int cl;
                    cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                    cin>>cl;
                    if(cl==1){
                        memberLogin(1);
                    }

}*/



    void mainAdminviewEvent(){

                string noRequired3;
                string date;
                getline(cin,noRequired3);
                cout<<"\n\n\t\t\t\t\t\tEnter a date to view that day's Event: ";
                getline(cin,date);
                system("CLS");


                int i=1;
                string eventDate;
                ifstream EventTake("Event.txt");

                while(getline(EventTake,eventDate)){

                    help4[i]=eventDate;
                    i++;

                }
                for(int j=0;j<1000;j=j+4){

                    if(j==996){

                        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tThere are no event at that date \n";

                    }
                    if(help4[j]==date){

 //cout<<"\t\t\t===========================================================================================\n\n\n\n";
cout<<"\t\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 //cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t========================================================== EVENT ===========================================================\n\n\n";
                        cout<<"\n\t\t\t\t\t\t|\tEvent title: "<<help4[j-2]<<endl<<"\n\t\t\t\t\t\t|\tEvent details: "<<help4[j-1]<<endl<<"\n\t\t\t\t\t\t|\tDate of event: "<<help4[j]<<endl<<"\n\t\t\t\t\t\t|\tClub No."<<help4[j+1]<<endl;
                cout<<"\n\n\n\t\t\t\t==============================================================================================================================\n\n\n";
                        break;
                    }

                }


                int cl;
                cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    event();

                }

}
    void clubAdminviewEvent(){

                string noRequired3;
                string date;
                getline(cin,noRequired3);
                cout<<"\n\t\t\t\t\t\t\tEnter a date to view that day's Event: ";
                getline(cin,date);
                system("CLS");


                int i=1;
                string eventDate;
                ifstream EventTake("Event.txt");
                //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t===================================== EVENT ==================================\n\n\n";
                while(getline(EventTake,eventDate)){

                    help4[i]=eventDate;
                    i++;

                }
                for(int j=0;j<1000;j=j+4){

                    if(j==996){
                        cout<<"\n\n\n\t\t\t\t==============================================================================\n\n\n";
                        cout<<"\n\n\t\t\t\t\t\t\tThere are no event at that date \n";
                        cout<<"\n\n\n\t\t\t\t==============================================================================\n\n\n";

                    }
                    if(help4[j]==date){
                            cout<<"\t\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\n\n\t\t\t\t============================================================= event ===================================================\n\n";

                        cout<<"\n\t\t\t\t\t\t|\tEvent title: "<<help4[j-2]<<endl<<"\n\t\t\t\t\t\t|\tEvent details: "<<help4[j-1]<<endl<<"\n\t\t\t\t\t\t|\tDate of event: "<<help4[j]<<endl<<"\n\t\t\t\t\t\t|\tClub No."<<help4[j+1]<<endl;
cout<<"\n\n\n\t\t\t\t========================================================================================================================\n\n\n";
                        break;

                    }

                }


                int cl;
                cout<<"\n\n\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    clubAdminControl(1);

                }

}

    void MemberviewEvent(){

                string noRequired3;
                string date;
                getline(cin,noRequired3);


                //cout<<"\n\n\n\n\n\t\t\t\t===================================== EVENT ==================================\n\n\n";
                cout<<"\n\t\t\t\t\t\t\tEnter a date to view that day's Event: ";
                getline(cin,date);


                int i=1;
                string eventDate;
                ifstream EventTake("Event.txt");

                while(getline(EventTake,eventDate)){

                    help4[i]=eventDate;
                    i++;

                }
                for(int j=0;j<1000;j=j+4){

                    if(j==996){

                         cout<<"\n\n\n\t\t\t\t==============================================================================\n\n\n";
                         cout<<"\n\n\t\t\t\t\t\t\tThere are no event at that date \n";
                         cout<<"\n\n\n\t\t\t\t==============================================================================\n\n\n";

                    }
                    if(help4[j]==date){
                            system("CLS");
                            cout<<"\n\n\t\t\t=======================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccc    ccccc  cccccccccc  ccccc    ccccc  ccccc    ccccccccc  cccccc           \n";
 cout<<"\t\t\t      ccc cc  cc ccc  ccc         ccc cc  cc ccc  ccc  cc  ccc        ccc  cc          \n";
 cout<<"\t\t\t      ccc   cc   ccc  cccccc      ccc   cc   ccc  cccccc   cccccc     cccccc           \n";
 cout<<"\t\t\t      ccc        ccc  ccc         ccc        ccc  ccc  cc  ccc        ccc  ccc         \n";
 cout<<"\t\t\t      ccc        ccc  cccccccccc  ccc        ccc  cccccc   ccccccccc  ccc   ccc        \n";
 cout<<"\t\t\t                                                                                                  \n";
 cout<<"\t\t\t           ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                        \n";
 cout<<"\t\t\t           ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                        \n";
 cout<<"\t\t\t           cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                        \n";
 cout<<"\t\t\t           ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                        \n";
 cout<<"\t\t\t           ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                  \n";
                            cout<<"\n\n\n\n\n\t\t\t\t===================================== EVENT ==================================\n\n\n";
                            cout<<"\n\t\t\t\t\t\t|\tEvent title: "<<help4[j-2]<<endl<<"\n\t\t\t\t\t\t|\tEvent details: "<<help4[j-1]<<endl<<"\n\t\t\t\t\t\t|\tDate of event: "<<help4[j]<<endl<<"\n\t\t\t\t\t\t|\tClub No."<<help4[j+1]<<endl;
                            cout<<"\n\n\n\t\t\t\t==============================================================================\n\n\n";
                            break;
                    }

                }


                int cl;
                cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    memberLogin(1);

                }

}
    void mainAdminForgetPass(){

            system("CLS");
            string admin;
            string color;
            string notRequired3;
            getline(cin,notRequired3);
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=======================================================================================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Your name: ";
            getline(cin,admin);
            cout<<"\n\n\t\t\t\t\t\t|\tEnter Your favorite color: ";
            getline(cin,color);

            string AdminAns;
            ifstream Admin2("Admin.txt");

            int i=0;
            while(getline(Admin2,AdminAns)){

                if(i>0){

                    help5[i]=AdminAns;

                }
                i=i+1;

            }
            for(int j=1;j<5;j++){

                    if(help5[j]==admin && help5[j+2]==color){
                    cout<<"\n\n\t\t\t\t\t\t|\tYour password is "<<help5[j+1]<<endl;

                    }
            }
            cout<<"\n\n\t\t\t\t=======================================================================================\n\n\n";
            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                mainAdminHelp();

            }


}
    void mainAdminNote(){

            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=======================================================================================\n\n\n";
            cout<<"\n\n\n\t\t\t\t\t\t\tYou can't be a Main Club Admin.\n\t\t\t\t\t\t\tBecause Main club Admin is set\n";
            cout<<"\n\n\t\t\t\t=======================================================================================\n\n\n";
            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                mainAdminHelp();

            }
}
    void viewMember(int k){
            int l=k;

            system("CLS");
            string AllMemberName;
            cout<<"\n\n\n\n\n\t\t\t\t=======================================ALL Member Info==================================\n\n\t\t";
            ifstream Member("Member.txt");
            int i=1;
            while(getline(Member,AllMemberName)){

                cout<<"|\t"<<AllMemberName<<"\t|";

                if(i%5==0){
                    cout<<"\n\t\t";
                }

                i++;

            }

            cout<<"\n\n\t\t\t\t=======================================================================================\n\n\n";
        if(l==0){

                        int cl;
            cout<<"\n\n\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                 clubAdminControl(1);

            }
        }
        if(l==1){

                        int cl;
            cout<<"\n\n\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                 generalMember();

            }
        }


}
    void clubAdminForgetPass(){

                string subAdmin;
                string club;
                string notRequired3;
                getline(cin,notRequired3);
                 cout<<"\n\n\t\t\t\t=======================================ALL Member Info==================================\n\n\n";
                cout<<"\n\t\t\t\t\t\t|\tEnter Your name: ";
                getline(cin,subAdmin);
                cout<<"\n\t\t\t\t\t\t|\tEnter Your Club Number: ";
                getline(cin,club);

                string subAdminAns;
                ifstream SubAdmin("subAdmin.txt");

                int i=0;
                while(getline(SubAdmin,subAdminAns)){

                    if(i>0){

                        help6[i]=subAdminAns;

                    }
                    i=i+1;

                }
                for(int j=1;j<1000;j=j+3){

                    if(help6[j]==subAdmin && help6[j+2]==club){

                        cout<<"\n\n\t\t\t\t\t\t\tYour password is: "<<help6[j+1]<<endl;
                        cout<<"\n\n\t\t\t\t===========================================================================================\n\n\n";
                        break;

                    }
                }

}
    void clubAdminNote(){

                system("CLS");
                cout<<"\n\n\t\t\t\t==================================================================================\n\n\n";
                cout<<"\n\n\t\t\t\t\t\t\tYou can be a Club Admin.\n\n\t\t\t\t\t\t\tFirst have to talk with main admin!\n";
                cout<<"\n\n\n\t\t\t\t==================================================================================\n\n\n";


}
    void memberForgetPass(){

                string member;
                string club;
                string notRequired3;
                getline(cin,notRequired3);
                system("CLS");
                cout<<"\n\n\n\t\t\t\t======================================= Member Password ==================================\n\n\n";
                cout<<"\n\t\t\t\t\t\t\tEnter Your name: ";
                getline(cin,member);
                cout<<"\n\t\t\t\t\t\t\tEnter Your club number: ";
                getline(cin,club);

                string MemberAns;
                ifstream Member("Member.txt");

                int i=0;
                while(getline(Member,MemberAns)){

                        help7[i]=MemberAns;
                        i=i+1;

                }

                for(int j=0;j<1000;j=j+5){

                        if(help7[j]==member && help7[j+4]==club){
                                cout<<"\n\n\t\t\t\t======================================= Member Password ==================================\n\n\n";
                        cout<<"\n\n\t\t\t\t\t\t\tYour password is "<<help7[j+1]<<endl;
                        cout<<"\n\n\n\t\t\t\t======================================================================================\n\n\n";

                    }
                }


}
    void memberHelpNote(){

            system("CLS");
            cout<<"\n\n\t\t\t\t===========================================================================================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t\tYou can be a Member of any club you want!.\n\t\t\t\t\t\t\tYou have to consult with the main admin!\n";
            cout<<"\n\n\t\t\t\t===========================================================================================\n\n\n";

}


    void baseMethod(int  i){
            int k=i;
            if(k==1){
                goto main12;
            }

            main:
            system("CLS");
    //cout<<"\n\n\n\n\t\t\t\t========================================================================================================\n\n\n";
    cout<<"\n\n\n\n\n";
    cout<<"\t\t\t\t    ccc             ccc   ccccccccc   ccc        ccccccccc  ccccccccc  cccccc   cccccc  ccccccccc        \n";
    cout<<"\t\t\t\t     ccc    ccc    ccc    ccc         ccc        ccc        ccc   ccc  ccc ccc ccc ccc  ccc              \n";
    cout<<"\t\t\t\t      ccc ccc ccc ccc     cccccc      ccc        ccc        ccc   ccc  ccc  ccccc  ccc  cccccc           \n";
    cout<<"\t\t\t\t       ccccc   ccccc      ccc         ccc        ccc        ccc   ccc  ccc    cc   ccc  ccc              \n";
    cout<<"\t\t\t\t        ccc     ccc       ccccccccc   ccccccccc  ccccccccc  ccccccccc  ccc         ccc  ccccccccc        \n";
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t======================================= Control Panel ====================================\n";
     cout<<"\n\n\t\t\t\t\t\t-------------------------\n";
     cout<<"\t\t\t\t\t\t|                       |\n";
            cout<<"\t\t\t\t\t\t|\t1. Main Admin\t|\n";
        //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t2. Club Admin\t|\n";
        //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t3. Member\t|\n";
        //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t4. Exit  \t|\n";
    cout<<"\t\t\t\t\t\t|                       |\n";
     cout<<"\t\t\t\t\t\t-------------------------\n";
        //Sleep(500);
            cout<<"\n\n\n\t\t\t\t===========================================================================================\n\n\n";
            cout<<"\n\t\t\t\t\t\tChoose an Option: ";
            cin>>option1;

        if(option1==1){
                system("Color 0A");
                MainAdmin();

        }
        if(option1==2){
main12:
system("Color 0C");
            main9:
            system("CLS");
            //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Club Admin Control Section ===============================\n\n\n";


 cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
            int option4;
            cout<<"\n\n\t\t\t\t\t\t|\t1/Login\n\t\t\t\t\t\t|\t2/Help\n\t\t\t\t\t\t|\t3/Back\n\t\t\t\t\t\t|\t4/Main menu\n\t\t\t\t\t\t|\t5/Exit\n\n\n\n\t\t\t\t=========================================================================================\n\n\n\n\n\t\t\t\t\t\t\tChoose an option: ";
            cin>>option4;

        if(option4==1){

            system("CLS");
            string unknown;
            getline(cin,unknown);
setNameClubAdmin:
 cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
            //cout<<"\n\n\n\t\t\t\t==========================================================================================\n\n\n";

            setName(1);

            cout<<"\t\t\t\t\t\t\t";

            setPass(1);

            ifstream subadmin("subAdmin.txt");


            int i=0;
            while(getline(subadmin,subAdminTake)){
                help2[i]=subAdminTake;
                i++;
            }
            system("CLS");
                            cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\n\n\t\t\t============================================================= About ME ===================================================\n\n";
            //cout<<"\n\n\n\t\t\t\t====================================== About Me =========================================\n\n\n";
            for(int i=1;i<1000;i=i+3){

                if(help2[i]==subAdmin[0] && help2[i+1]==subAdmin[1]){



                    cout<<"\n\n\n\t\t\t\t\t\t\tName: "<<help2[i]<<endl<<"\n\n\n\t\t\t\t\t\t\tID: "<<help2[i+1]<<endl<<"\n\n\n\t\t\t\t\t\t\tClub Number: "<<help2[i+2];
cout<<"\n\n\n\n\n\t\t\t=============================================================================================================================\n\n\n";
                    Sleep(4000);
                    clubAdminControl(0);

                    int cl;
                    cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                    cin>>cl;
                    if(cl==1){

                        goto main9;

                    }

                    break;

                }
                if(i>666){
                                        cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\t\t\t==========================================================================================================================\n\n\n\n";

                    //cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t|\tEnter Your Correct Name and Password\n\n\n";
                    cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
                    Sleep(3000);
                    system("CLS");
                    goto setNameClubAdmin;
                    //break;

                }
            }
            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                goto main9;

            }

    }
    if(option4==2){





            system("CLS");
            cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
            int op3;
            //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t===============================Club Admin Control Section ===============================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\t1/Forget Password\n\n\t\t\t\t\t\t|\t2/Note\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\n\n\t\t\t\t\t\t\tEnter an option: ";
            cin>>op3;
            system("CLS");
            if(op3==1){

                clubAdminForgetPass();

            }
            if(op3==2){

                clubAdminNote();

            }
                //char op;
            //    cout<<"\n\n\t\t\t\t\t\t\tTo go back to main menu click 'y' : ";
            //    cin>>op;
               // if(op=='y'){
            //        goto main;
            //    }


            int cl;
            cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
            cin>>cl;
            if(cl==1){

                goto main9;

            }
    }
    if(option4==3){
cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 cout<<"\t\t\t==========================================================================================================================\n\n\n\n";
        goto main;

    }
    if(option4==4){

        goto main;

    }
    if(option4==5){

        exit(0);

    }
    }
    if(option1==3){
        system("Color 0D");

        memberSection();

    }
    if(option1==4){
            system("Color 0E");

        exit(0);

    }



}
    void file(){

        main4:
        system("CLS");
                cout<<"\n\n\t\t\t\t===================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
        cout<<"\n\n\n\n\t\t\t\t=============================== Main Admin File Control Section ===============================\n\n\n";
        cout<<"\n\t\t\t\t\t\t|\t1/show Admin\t|\n\t\t\t\t\t\t|\t2/Add new Club\t|\n\t\t\t\t\t\t|\t3/Add Admin\t|\n\t\t\t\t\t\t|\t4/Back\t\t|\n\t\t\t\t\t\t|\t5/Main menu\t|\n\t\t\t\t\t\t|\t6/Exit\t\t|\n\n\t\t\t\t=======================================================================================\n\n\n\t\t\t\t\t\t\tChoose an Option: ";
        cin>>option3;
        if(option3==1){

            showAdmin();

        }
        if(option3==2){

            addClub();

        }

        if(option3==3){

            addAdmin();

        }
        if(option3==4){

            mainAdminLogin();

        }
        if(option3==5){

            baseMethod(0);

        }
        if(option3==6){

            exit(0);

        }

}
    void generalMember(){

            main5:
            system("CLS");
            int op2;
                                cout<<"\n\n\t\t\t\t===================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
            cout<<"\n\n\n\n\t\t\t\t==========================================================================================\n\n\n";
            //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Member Control Section ===============================\n\n\n";
            cout<<"\n\t\t\t\t\t\t|\t1/Add Member\n\t\t\t\t\t\t|\t2/View Member\n\t\t\t\t\t\t|\t3/Search Member\n\t\t\t\t\t\t|\t4/Back\n\t\t\t\t\t\t|\t5/Main menu\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\t\t\t\t\t\t\tChoose a number: ";
            cin>>op2;

            if(op2==1){


                addMember();

            }
            if(op2==2){

                viewMember(1);


            }
            if(op2==3){

                searchMember();

            }
            if(op2==4){

                mainAdminLogin();

            }
            if(op2==5){

                baseMethod(0);

            }

            }
    void event(){

            main7:
            system("CLS");
            int eventChoose;
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Event Control Section ===============================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\t1/Add Event\n\t\t\t\t\t\t|\t2/View Event\n\t\t\t\t\t\t|\t3/Back\n\t\t\t\t\t\t|\t4/Main menu\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\t\t\t\t\t\t\tChoose an option: ";
            cin>>eventChoose;

            if(eventChoose==1){

                    mainAdminAddEvent();

            }

            if(eventChoose==2){

                    mainAdminviewEvent();

            }
            if(eventChoose==3){

                    mainAdminLogin();

            }
            if(eventChoose==4){

                baseMethod(0);

            }

}
    void mainAdminHelp(){

            main8:
            system("CLS");
            int op3;
                                cout<<"\n\n\t\t\t\t====================================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
            //cout<<"\n\n\n\n\t\t\t\t==========================================================================================\n\n\n";

            cout<<"\n\n\n\n\t\t\t\t=============================== Main Administrative Control Section ===============================\n\n\n";
            cout<<"\n\n\t\t\t\t\t\t|\t1/Forget Password\n\t\t\t\t\t\t|\t2/Note\n\t\t\t\t\t\t|\t3/Back\n\t\t\t\t\t\t|\t4/Main menu\n\n\n\t\t\t\t\===================================================================================================\n\n\n\n\n\t\t\t\t\t\t\tEnter an option: ";
            cin>>op3;

            if(op3==1){

                mainAdminForgetPass();

            }
            if(op3==2){

                mainAdminNote();

            }
            if(op3==3){

                MainAdmin();

            }
            if(op3==4){

                baseMethod(0);

            }


}
    void mainAdminLogin(){

            main3:
            system("CLS");
                    cout<<"\n\n\t\t\t\t===================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
            cout<<"\n\n\n\n\t\t\t\t==========================================================================================\n\n\n";
            cout<<"\n\t\t\t\t\t\t|\t1/File         \t\t|\n\t\t\t\t\t\t|\t2/General Member\t|\n\t\t\t\t\t\t|\t3/Advising Committee\t|\n\t\t\t\t\t\t|\t4/Activity    \t\t|\n\t\t\t\t\t\t|\t5/Back    \t\t|\n\t\t\t\t\t\t|\t6/Main menu   \t\t|\n\t\t\t\t\t\t\t\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\t\n\t\t\t\t\t\tChoose an Option: ";
            cin>>op;

            if(op==1){

                file();

            }

            if(op==2){

                generalMember();

            }

            if(op==3){

                mainAdministrativeControlSection();

            }


            if(op==4){

                event();

            }

            if(op==5){

                MainAdmin();

            }
            if(op==6){

                baseMethod(0);

            }


}
    void MainAdmin(){


            main2:
            system("CLS");
            //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Main Admin Section ================================\n\n\n";
cout<<"\n\n\t\t\t\t===================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
 cout<<"\n\t\t\t\t===================================================================================\n\n\n\n";

            cout<<"\n\t\t\t\t\t\t|\t1/Login   \t|\n";
            //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t2/Help      \t|\n";
                //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t3/Main menu \t|\n";
            //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t4/Back      \t|\n";
            //Sleep(500);
            cout<<"\t\t\t\t\t\t|\t5/Exit      \t|\n";
            cout<<"\n\n\n\t\t\t\t=====================================================================================\n\n\n";
            cout<<"\n\t\t\t\t\t\t\tChoose an Option: ";
            cin>>option2;

            if(option2==1){

                system("CLS");
                int op;


                string unknown;
                getline(cin,unknown);
    setNameAdmin:
 cout<<"\n\n\t\t\t\t===================================================================================\n\n\n\n";
 cout<<"\t\t\t\t\t      ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc        \n";
 cout<<"\t\t\t\t\t     ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc        \n";
 cout<<"\t\t\t\t\t    ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc        \n";
 cout<<"\t\t\t\t\t   ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc        \n";
 cout<<"\t\t\t\t\t  ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc        \n";
 cout<<"\t\t\t\t\t                                                                        \n";
 cout<<"\t\t\t\t\t      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc              \n";
 cout<<"\t\t\t\t\t      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc              \n";
 cout<<"\t\t\t\t\t      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc              \n";
 cout<<"\t\t\t\t\t      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc        \n";
 //cout<<"\n\t\t\t\t===================================================================================\n\n\n\n";
                cout<<"\n\n\n\n\n\t\t\t\t=============================== Main Admin Login Section ===============================\n\n\n";
                setName();
                cout<<"\t\t\t\t\t\t|\t                      ";
                setPass();
                cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                ifstream admin("Admin.txt");


                int i=0;
                while(getline(admin,mainAdminTake)){

                    help[i]=mainAdminTake;
                    i++;

                }

                if(help[1]==mainAdmin[0] && help[2]==mainAdmin[1]){

                    mainAdminLogin();

                }
                else{

                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t|\tEnter Your Correct Name and Password\n\n\n";
                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                    Sleep(3000);
                    system("CLS");
                    goto setNameAdmin;

                }

        }

        if(option2==2){

            mainAdminHelp();

        }
        if(option2==3){

            baseMethod(0);

        }
        if(option2==4){

            baseMethod(0);

        }
        if(option2==5){

            exit(0);
        }
}
    void clubAdminControl(int n){


               int k=n;
               if(n=1){
                     system("CLS");
               }
cout<<"\t\t\t=========================================================================================================================\n\n\n\n";
 cout<<"\t\t\t      ccccccccc  ccc       ccc   ccc   cccccc            ccccc     ccccccc    ccccc    ccccc  ccccccc  ccccc    ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc         ccc ccc    ccc    cc  ccc cc  cc ccc    ccc    ccc ccc  ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   cccccc          ccccccccc   ccc     cc ccc  cccc  ccc    ccc    ccc  ccc ccc       \n";
 cout<<"\t\t\t      ccc        ccc       ccc   ccc   ccc  ccc       ccc     ccc  ccc    cc  ccc        ccc    ccc    ccc   ccc cc       \n";
 cout<<"\t\t\t      ccccccccc  ccccccccc ccccccccc   cccccc        ccc       ccc ccccccc    ccc        ccc  ccccccc  ccc    ccccc       \n";
 cout<<"\t\t\t                                                                                                                          \n";
 cout<<"\t\t\t                               ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                                       \n";
 cout<<"\t\t\t                               ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                                       \n";
 cout<<"\t\t\t                               ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                                       \n";
 cout<<"\t\t\t                               ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                                 \n";
 //cout<<"\n\n\t\t\t============================================================= About ME ===================================================\n\n";

cout<<"\n\n\n\n\n\n\t\t\t\t========================================= Club Admin Control Section =====================================================\n\n\n";
                cout<<"\n\n\t\t\t\t\t\t|\t1/Add event\n\t\t\t\t\t\t|\t2/View Member\n\t\t\t\t\t\t|\t3/View Event\n\t\t\t\t\t\t|\t4/Back\n\n\n\n\t\t\t\t=======================================================================================================\n\n\n\t\t\t\t\t\tChoose an option: ";
                cin>>option5;
                if(option5==1){

                    clubAdminAddEvent();

                }
                if(option5==2){

                    viewMember(0);

                }
                if(option5==3){

                    clubAdminviewEvent();

                }
                if(option5==4){
                    baseMethod(1);

                }

}
    void memberLogin(int k){

            system("CLS");
            int option7;
            string unknown;
            int l=k;
            if(l==1){

                goto main11;

            }

            getline(cin,unknown);
memberName:
            setName(2,3);
            setPass(2,3);
            main11:
            system("CLS");
            ifstream Member("Member.txt");


            int i=0;
            while(getline(Member,memberList)){

                help3[i]=memberList;
                i++;

            }
            system("CLS");

            cout<<"\n\n\n\n\n\n\t\t\t\t=============================== Member Section ===============================\n\n\n";
            for(int i=0;i<1000;i=i+5){

                if(help3[i]==member[0] && help3[i+1]==member[1]){

                    cout<<"\n\t\t\t\t\t\t\tName: "<<help3[i]<<endl<<"\n\t\t\t\t\t\t\tID: "<<help3[i+1]<<endl<<"\n\t\t\t\t\t\t\t"<<help3[i+2]<<endl<<"\n\t\t\t\t\t\t\t"<<help3[i+3]<<endl<<"\n\t\t\t\t\t\t\tClub Number: "<<help3[i+4];
                    cout<<"\n\n\n\n\n\n\t\t\t\t=============================== Member Section ===============================\n\n\n";
                    cout<<"\n\n\t\t\t\t\t\t|\t1/View Event\n\t\t\t\t\t\t|\t2/Back\n\t\t\t\t\t\t|\t2/Exit\n\n\n\n\t\t\t\t==============================================================================\n\n\n\n\n\t\t\t\t\t\tChoose an option: ";
                    cin>>option7;
                    if(option7==1){

                        MemberviewEvent();

                    }
                    if(option7==2){

                        memberSection();

                    }
                    if(option7==3){

                        exit(0);

                    }
                    break;


            }
            if(i>666){

                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t|\tEnter Your Correct Name and Password\n\n\n";
                    cout<<"\n\n\n\t\t\t\t=======================================================================================\n\n\n";
                    Sleep(3000);
                    system("CLS");
                    goto memberName;
                    //break;

            }
            }
                int cl;
                cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    memberSection();

                }
}
    void memberSection(){

        main10:
        system("CLS");
        int option6;
        //cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t================================== Member Section ==================================\n\n\n";
cout<<"\n\n\t\t\t==================================================================================================\n\n\n\n";
 cout<<"\t\t\t                 ccccc    ccccc  cccccccccc  ccccc    ccccc  ccccc    ccccccccc  cccccc           \n";
 cout<<"\t\t\t                 ccc cc  cc ccc  ccc         ccc cc  cc ccc  ccc  cc  ccc        ccc  cc          \n";
 cout<<"\t\t\t                 ccc   cc   ccc  cccccc      ccc   cc   ccc  cccccc   cccccc     cccccc           \n";
 cout<<"\t\t\t                 ccc        ccc  ccc         ccc        ccc  ccc  cc  ccc        ccc  ccc         \n";
 cout<<"\t\t\t                 ccc        ccc  cccccccccc  ccc        ccc  cccccc   ccccccccc  ccc   ccc        \n";
 cout<<"\t\t\t                                                                                                  \n";
 cout<<"\t\t\t                      ccccccc      ccccc     ccccc    ccc  ccccccccc   ccc                        \n";
 cout<<"\t\t\t                      ccc   cc    ccc ccc    ccc ccc  ccc  ccc         ccc                        \n";
 cout<<"\t\t\t                      cccccc     ccccccccc   ccc  ccc ccc  cccccc      ccc                        \n";
 cout<<"\t\t\t                      ccc       ccc     ccc  ccc   ccc cc  ccc         ccc                        \n";
 cout<<"\t\t\t                      ccc      ccc       ccc ccc    ccccc  ccccccccc   ccccccccc                  \n";
 cout<<"\t\t\t==================================================================================================\n\n\n\n";
        cout<<"\n\n\t\t\t\t\t\t|\t1/Login\n\t\t\t\t\t\t|\t2/Help\n\t\t\t\t\t\t|\t3/Back\n\t\t\t\t\t\t|\t4/Main menu\n\t\t\t\t\t\t|\t5/Exit\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\n\t\t\t\t\t\tChoose an option: ";
        cin>>option6;
        if(option6==1){

            memberLogin(0);

        }
        if(option6==2){



                system("CLS");
                int op3;
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=================================== Member Section ==================================\n\n\n";
                cout<<"\n\n\t\t\t\t\t\t|\t1/Forget Password\n\t\t\t\t\t\t|\t2/Note\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\n\n\t\t\t\t\t\tEnter an option: ";
                cin>>op3;
                if(op3==1){

                        memberForgetPass();

                }
                if(op3==2){

                        memberHelpNote();

                }
                                //char op;
                               /// cout<<"\n\n\t\t\t\t\t\t\tTo go back to main menu click 'y' : ";
                               /// cin>>op;
                              ///  if(op=='y'){
                             ///       baseMethod();
                               /// }



                int cl;
                cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    goto main10;

                }
        }
        if(option6==3){

            baseMethod(0);

        }
        if(option6==4){

            baseMethod(0);

        }
        if(option6==5){

            exit(0);

        }
}
    void administrativeMember(){

        system("CLS");
        int op3;
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Main Administrative Control Section ===============================\n\n\n";
        cout<<"\n\t\t\t\t\t\t|\t1/View committee\n\t\t\t\t\t\t|\t2/View Advisor\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\n\t\t\t\t\t\t|\tChoose an option: ";
        cin>>op3;

        if(op3==1){

            viewCommittee();

        }
        if(op3==2){

            viewAdvisor();

        }

                int cl;
                cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                cin>>cl;
                if(cl==1){

                    mainAdministrativeControlSection();

                }

}
    void advisoryCommittee(){

                system("CLS");

                int club;
                int i=allClubList();
cout<<"\n\n\n\n\n\t\t\t\t==================================================================================\n\n\n";
                cout<<"\n\n\n\t\t\t\t\t\tIn which club you want to add a committee!\n";
                cout<<"\n\n\t\t\t\t\t\tChoose a Club: ";
                cin>>club;

                if(club<=i-1){

                        int op4;
                        system("CLS");
                        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t=============================== Main Administrative Control Section ===============================\n\n\n";
                        cout<<"\n\t\t\t\t\t\t|\t1/Add committee\n\n\t\t\t\t\t\t|\t2/Add advisor\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\n\t\t\t\t\t\t|\tChoose an option: ";
                        cin>>op4;


                        if(op4==1){

                            addCommittee(club);

                        }

                         if(op4==2){

                             addAdvisor(club);


                        }

                    }
                    else{

                        cout<<"\n\n\t\t\t\t\t\t\tEnter a valid club number!\n";

                    }


                    int cl;
                    cout<<"\n\n\t\t\t\t\t\t\tWant to go back click '1': ";
                    cin>>cl;

                    if(cl==1){

                        mainAdministrativeControlSection();

                    }

}
    void mainAdministrativeControlSection(){

            main6:
            int op2;

            system("CLS");
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t============================ Main Administrative Control Section ============================\n\n\n";
            cout<<"\n\t\t\t\t\t\t|\t1/Administrative Member\n\t\t\t\t\t\t|\t2/Advisory Committee\n\t\t\t\t\t\t|\t3/Back\n\t\t\t\t\t\t|\t4/Main menu\n\n\n\n\t\t\t\t=======================================================================================\n\n\n\n\t\t\t\t\t\t|\tChoose an option: ";
            cin>>op2;

            if(op2==1){

                administrativeMember();

            }
            if(op2==2){

                advisoryCommittee();

            }
            if(op2==3){

                mainAdminLogin();

            }
            if(op2==4){

               baseMethod(0);

            }


}


};


int main(){
    A a;
    a.baseMethod(0);



return 0;
}
