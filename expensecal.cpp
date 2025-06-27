#include<iostream>
using namespace std;

class transport{
    private:
        int num1;
        int num2;
        int sum=0;
    public:
        
        void displayinfo(int amount){
            num1=amount;
            sum=sum+num1;
            cout<<"Amount added succesfully"<<endl<<"Total amount in transport:"<<sum<<endl;
        }
        
        void deductamt(int deduct){
            num2=deduct;
            sum=sum-num2;
            cout<<"Amount deducted succesfully"<<endl<<"Total amount in transport:"<<sum<<endl;
        }
        void showaccounts(){
            cout<<"Total amount in transport:"<<sum<<endl;
        }
};

class utilities{
    private:
        int num1;
        int num2;
        int sum=0;
    public:

        void displayinfo(int amount){
            num1=amount;
            sum=sum+num1;
            cout<<"Amount added succesfully"<<endl<<"Total amount in utilities:"<<sum<<endl;
        }
        
        void deductamt(int deduct){
            num2=deduct;
            sum=sum-num2;
            cout<<"Amount deducted succesfully"<<endl<<"Total amount in transport:"<<sum<<endl;
        }
        void showaccounts(){
            cout<<"Total amount in utilities:"<<sum<<endl;
        }
};

class shopping{
    private:
        int num1;
        int num2;
        int sum=0;
    public:
        
        void displayinfo(int amount){
            num1=amount;
            sum=sum+num1;
            cout<<"Amount added succesfully"<<endl<<"Total amount in shopping:"<<sum<<endl;
        }
        
        void deductamt(int deduct){
            num2=deduct;
            sum=sum-num2;
            cout<<"Amount deducted succesfully"<<endl<<"Total amount in transport:"<<sum<<endl;
        }
        void showaccounts(){
            cout<<"Total amount in shopping:"<<sum<<endl;
        }
};
int main(){
    transport obj;
    utilities obj1;
    shopping obj2;

    while(true){
    cout<<endl;

    cout<<"Expense Menu(Add)"<<endl;
    cout<<"1:Add amount to the transport"<<endl;
    cout<<"2:Add amount to the utilities"<<endl;
    cout<<"3:Add amount to the shopping"<<endl;
    cout<<"4:Show all accounts"<<endl;
    cout<<"5:Deduct amount"<<endl;
    cout<<"6:Exit program"<<endl;

    int choice;
    cout<<"Enter your choice:";
    cin>> choice;
    cout<<endl;

        switch(choice){

        case 1:{
        int amount;
        cout<<"Enter your amount:";
        cin>>amount;
        obj.displayinfo(amount);
        break;
        }
        

        case 2:{ 
        int amount;
        cout<<"Enter your amount:";
        cin>>amount;
        obj1.displayinfo(amount);
        break;
        }
       
        case 3:{
        int amount;
        cout<<"Enter your amount:";
        cin>>amount;
        obj2.displayinfo(amount);
        break;
        }
        case 4:{
            obj.showaccounts();
            obj1.showaccounts();
            obj2.showaccounts();
            break;
        }
        
        case 5:{
              
            while(true){
            cout<<"Expense Menu(Deduct)"<<endl;
            cout<<"1:Deduct amount from transport"<<endl;
            cout<<"2:Deduct amount from utilities"<<endl;
            cout<<"3:Deduct amount from shopping"<<endl;
            cout<<"4:Show all accounts"<<endl;
            cout<<"5:Exit program"<<endl;

            
            int choice1;
            cout<<"Enter your choice:";
            cin>> choice1;
            cout<<endl;
            
                switch(choice1){
                
                case 1:{
                int deduct;
                cout<<"Enter the amount you want to deduct:";
                cin>>deduct;
                obj.deductamt(deduct);
                break;
                }

                case 2:{ 
                int deduct;
                cout<<"Enter the amount you want to deduct:";
                cin>>deduct;
                obj1.deductamt(deduct);
                break;
                }
       
                case 3:{
                int deduct;
                cout<<"Enter the amount you want to deduct:";
                cin>>deduct;    
                obj2.deductamt(deduct);
                break;
                }

                case 4:{
                obj.showaccounts();
                obj1.showaccounts();
                obj2.showaccounts();
                break;
                }

                case 5:{
                cout<<"Program ended sucessfully";
                return 0;
                }
            }
        }

        case 6:{
        cout<<"Program ended sucessfully";
        return 0;
        }

        default:
        cout<<"error";
        }
    }
    }
}