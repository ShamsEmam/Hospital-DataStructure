#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Branch
{
    int IDB;
    string NameB,locationB;
    Branch *next;
    Branch()
    {
        IDB=0;
        NameB="";
        locationB="";
        next=NULL;
    }
};
class linkedlistBranch
{
public:
    Branch*branchHead;
    linkedlistBranch()
    {
        branchHead=NULL;
    }
//function to Branch
    void InsertBranch(int IDB, string NameB,string locationB)
    {
        Branch * T_Branch= new Branch;
        T_Branch->IDB = IDB;
        T_Branch->NameB=NameB;
        T_Branch->locationB = locationB;
        if(branchHead==NULL)
        {
            T_Branch->next=NULL;
            branchHead=T_Branch;
        }
        else
        {
            T_Branch->next = branchHead;
            branchHead = T_Branch;
        }
    }
    void traverseBranch()
    {
        if(branchHead==NULL)
            cout<<"This Hospital have one brach\n";
            else{
        Branch*t = branchHead;
        cout<<"Elements in Linked List\n";
        while(t!= NULL)
        {
            cout<<"ID:" <<t->IDB<<"\n"<<"Name: "<<t->NameB<<"\n"<<"location"<<t->locationB<<"\n";
            t = t->next;
        }
            }
        cout<<endl;
    }

    string SearchB(int IDB)
    {
        string result=" ",ans=" ";
        if(branchHead==NULL)
            cout<<"This Hospital have one brach\n";
        else
        {
            Branch*temp=branchHead;
            while (temp!=NULL)
            {
                if(temp->IDB==IDB)
                {
                     result=to_string(temp->IDB);
                     ans=temp->NameB;
                     break;
                }
                    temp=temp->next;
                }
            }
            return result;
        }

    /************************************************************/
};
struct Doctor
{
    string IDD, NameD,specializationD, BranchHosD;
    int appointmentD;
    Doctor *next;
    Doctor()
    {
        IDD="";
        appointmentD=0;
        NameD="";
        specializationD="";
        BranchHosD="";
        next=NULL;
    }
};
class linkedlistDoctor
{
public:
    Doctor*DoctorHead;
    linkedlistDoctor()
    {
        DoctorHead=NULL;
    }
    //function for doctor
    void InsertDoc(string IDD,string NameD,string specializationD, string BranchHosD)
    {
        Doctor * tempD = new Doctor;
        tempD->IDD = IDD;
        tempD->NameD = NameD;
        tempD->specializationD = specializationD;
        tempD->BranchHosD = BranchHosD;
        tempD->appointmentD=0;
        if(DoctorHead==NULL)
        {
            tempD->next=NULL;
            DoctorHead=tempD;
        }
        else
        {
            tempD->next = DoctorHead;
            DoctorHead = tempD;
        }
    }
    string RemoveDoc(string IDD)
    {
        if(DoctorHead ==NULL)
        {
            cout<<"list is empty\n";
            return "";
        }
        else
        {
            Doctor*delptr=DoctorHead;
            string delvalue=DoctorHead->NameD;
            DoctorHead=DoctorHead->next;
            delete delptr;
            return delvalue;
        }
    }
    int traverse_appointment()
    {
        Doctor * t = DoctorHead;
        if(DoctorHead == NULL)
        cout<<"This is all appointment\n";
        else
            {
                cout<<"Details of all doctor and their appointment :\n";
        while(t != NULL)
        {
            cout<<"ID: "<<t->IDD<<"\n"<<"Name: "<<t->NameD<<"\n"<<"specializationD: "<<t->specializationD<<"\n"<<"BranchD: "<<t->BranchHosD<<"\n"<<t->appointmentD<<"\n\n";
            t = t->next;
        }
        }
        cout<<endl;
    }
    /************************************************************************/
};
struct Patients
{
    string IDP, NameP,AddressP ;
    int AppointmentP;
    Patients *next;
    Patients()
    {
        IDP="";
        NameP="";
        AddressP="";
        AppointmentP=0;
        next=NULL;
    }
};

class linkedlistPatient
{
public:
    Patients*PatientsHead;
    linkedlistPatient()
    {
        PatientsHead=NULL;
    }
    //function for Patients
    void InsertP(string IDP, string NameP, string AddressP,int AppointmentP)
    {
        Patients * tempP = new Patients;
        tempP->IDP = IDP;
        tempP->NameP = NameP;
        tempP->AddressP = AddressP;
        tempP->AppointmentP = AppointmentP;
        if(PatientsHead==NULL)
        {
            tempP->next=NULL;
            PatientsHead=tempP;
        }
        else
        {
            tempP->next = PatientsHead;
            PatientsHead = tempP;
        }
    }
    void traverse_appointmentp()
    {
        if(PatientsHead == NULL)
            cout<<"Empty List \n";
            else{
        Patients * t = PatientsHead;
        cout<<"This is all appointment\n";
        while(t != NULL)
        {
            cout<<"Name: "<<t->NameP<<"\n"<<"AppointmentP: "<<t->AppointmentP<<"\n\n";
            t = t->next;
        }
            }
        cout<<endl;
    }
    string RemoveP(string NameP)
    {
        if(PatientsHead ==NULL)
        {
            cout<<"list is empty\n";
            return "";
        }
        else
        {
            Patients*delptr=PatientsHead;
            string delvalue=PatientsHead->NameP;
            PatientsHead=PatientsHead->next;
            delete delptr;
            return delvalue;
        }
    }
    string SearchP(string NameP)
    {
        string result=" ";
        if(PatientsHead==NULL)
            cout<<"this name is not exit\n";
        else
        {
            Patients*tempP=PatientsHead;
            while (tempP!=NULL)
            {
                if(tempP->NameP==NameP)
                {
                    result=tempP->NameP;
                    break;
                }
                    tempP=tempP->next;
                }
            }
            return result;
        }

    /*******************************************************************************/
};
int main()
{
    linkedlistBranch LB;
    linkedlistDoctor LD;
    linkedlistPatient LP;
    int IDB;
    string  NameB,locationB;
    string IDD, NameD,specializationD, BranchHosD;
    int appointmentD;
    string IDP, NameP,AddressP ;
    int AppointmentP;
    while(true)
    {

        cout<<"\t*********************************************"<<endl;
        cout<<"\t\tEnter (K) to make any operation about Branch \n"<<endl;
        cout<<"\t\tEnter (l) to make any operation about Doctor\n"<<endl;
        cout<<"\t\tEnter (M) to make any operation about Patients \n"<<endl;
        cout<<"\t*********************************************"<<endl;
        cout<<"Your Choice:";
        char choiceT;
        cin>>choiceT;
        switch (choiceT)
        {
        case 'k':
        case 'K':
        {
            cout<<"\t\tEnter (A) to add new branch \n"<<endl;
            cout<<"\t\tEnter (B) to display branch \n"<<endl;
            cout<<"\t\tEnter (C) to search branch by ID \n"<<endl;
            cout<<"Your Choice:";
            char choiceB;
            cin>>choiceB;
            switch (choiceB)
            {
            case 'A':
            {
                cout<<"enter your ID\n";
                cin>>IDB;
                cout<<"enter your Name \n";
                cin>> NameB ;
                cout<<"enter your location\n";
                cin>>locationB;
                LB.InsertBranch(IDB,NameB,locationB);
                break;
            }
            case 'B':
            {
                LB.traverseBranch();
                break;
            }
            case 'C':
            {
                cout<<"enter your ID\n";
                cin>>IDB;
                cout<< LB.SearchB(IDB);
                break;
            }
            default:
                cout<<"error choice\n";
            }
            cout<<"\t*********************************************"<<endl;
            break;
        }

        case 'l':
        case 'L':
        {

            cout<<"\t\tEnter (D) to add new doctor\n"<<endl;
            cout<<"\t\tEnter (E) to remove doctor\n"<<endl;
            cout<<"\t\tEnter (F) to View all Appointment \n"<<endl;
            cout<<"Please Enter your choice: ";
            char choiceD;
            cin>>choiceD;
            switch(choiceD)
            {
            case 'D':
            {
                cout<<"enter your ID\n\n";
                cin>>IDD;
                cout<<"enter your BranchHos\n\n";
                cin>> BranchHosD ;
                cout<<"enter your Name \n\n";
                cin>> NameD ;
                cout<<"enter your specialization\n\n";
                cin>>specializationD;
                LD.InsertDoc(IDD,BranchHosD,NameD,specializationD);
                break;
            }
            case 'F':
            {
                LD.traverse_appointment();
                break;
            }
            case 'E':
            {
                cout<<"enter the id doctor\n";
                cin>>IDD;
                cout<<"remove success "<<LD.RemoveDoc(IDD)<<"\n";
                break;
            }
            default:
                cout<<"error choice\n";

            }
            cout<<"\t*********************************************"<<endl;
            break;
        }
        case 'M':
        case 'm':
        {

            cout<<"\t\tEnter (G) to add new Patients\n"<<endl;
            cout<<"\t\tEnter (H) to remove Patients\n\n";
            cout<<"\t\tEnter (I) to View Book Appointment\n\n";
            cout<<"\t\tEnter (J) to search Patients by Name\n\n"<<endl;
            cout<<"Please Enter yout choice: ";
            int choiceP;
            cin>>choiceP;
            switch(choiceP)
            {
            case 'G':
            {
                cout<<"enter your ID:\n\n";
                cin>>IDP;
                cout<<"enter your Name: \n\n";
                cin>> NameP ;
                cout<<"enter your AddressP: \n\n";
                cin>>AddressP;
                cout<<"enter your AppointmentP: \n \n";
                cin>>AppointmentP;
                LP.InsertP( IDP,  NameP,  AddressP, AppointmentP);
                break;
            }
            case 'H':
            {
                cout<<"enter the name patient\n";cin>>NameP;
                cout<<"remove success "<<LP.RemoveP(NameP)<<endl;
                break;
            }
            case 'I':
            {
                LP.traverse_appointmentp();
                break;
            }
            case 'J':
            {
                cout<<"enter your name\n";
                cin>>NameP;
                LP.SearchP( NameP);
                break;
            }
            default:
                cout<<"error choice\n";

            }
            cout<<"\t*********************************************"<<endl;
            break;
        }
            default:
                cout<<"invalid choice\n";
        }
    }
    int main();
}


