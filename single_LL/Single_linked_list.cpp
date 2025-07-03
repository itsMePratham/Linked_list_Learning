#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(   Node*&head ,int data   )
{


     Node* new_node = new Node(data);

       


        new_node->next = head;

        head = new_node;





}


void insertAtEnd(  Node*&head , int data)
{

 Node*new_node = new Node(data);

 Node * temp = head ;

   while(temp->next!=NULL)
   {

    temp =temp->next;

   }

    temp->next = new_node;



}



 void insertAtAnyPosition(Node* &head  , int data  , int position )
 
 {

        if(position<1)
        {

            cout<<"Invalid position Can't Able to insert ";
            return;
        }


          else if (position == 1 ) {

                insertAtHead(head,data);

                    return;

          }


         Node* new_node = new Node(data);

         Node* temp =  head;

         int count = 1 ;

         while(temp != NULL && count<position-1)
         {


                  temp = temp->next;
                  count++;

         }


           if(temp == NULL)
           {

             cout<<"Invalid Position ";
           }


           new_node->next = temp->next;

           temp->next= new_node;
              return;

 }



     void updateAtAnyPosition(Node* head ,int value, int position)
     {

            if(position <1)
            {
                cout<<"Invalid Position ";
                return;
            }

             Node* temp = head ;
                int count = 1 ;
             while( temp !=NULL &&    count<position  )
             {

                          temp = temp->next;
                          count++;



             }


             if(temp == NULL)
             {
                cout<<"Invalid position";
                return;
             }


                temp->data = value;
                return;


     }



     void deletionAtHead( Node*&head )
     {

        Node* temp = head ;

         head = head->next ;

         free(temp);




     }


    void deleteAtEnd(Node*&head )
    {

       Node*temp =head ;

       while(temp->next->next !=NULL)
       {
        temp = temp->next;
       }

           temp->next = NULL;

    }



    void deletionAtPosition(Node*&Head , int position)
    {

         if(position<1)
         {
            cout <<"Cannot delete coz invalid position";
         }


         else if(position == 1 )
         {
            deletionAtHead(Head);
            return;
         }


         Node* temp = Head ;
         int count = 1 ;

           while(temp != NULL && count <position-1)
           {
                temp = temp->next;
                count++;
           }


           if(temp == NULL)
           {

            cout <<"Invalid position sir";
           }

           temp->next = temp->next->next;


    }

void linkedListTraversal(Node* head  )
{

     Node * temp = head ;

     while(temp != NULL)
     {

        cout<<temp->data<<" ";
        temp = temp->next;
     }


}




int main()
{

    Node *Head = new Node(5);

    // cout << Head->data << " " <<Head->next << endl;
        

    insertAtHead(Head , 4);
     insertAtHead(Head , 3);
      insertAtHead(Head , 2);
       insertAtHead(Head , 1);










    linkedListTraversal(Head);
     insertAtEnd(Head , 10);
      insertAtEnd(Head , 20);
       insertAtEnd(Head , 30);
        insertAtEnd(Head , 40);
          cout<<endl;
        
            linkedListTraversal(Head);

          insertAtAnyPosition(Head , 69 , 1)   ;
              cout<<endl;


              updateAtAnyPosition(Head , 786 , 10);

             linkedListTraversal(Head);

              
            //    deletionAtHead(Head);
           // deleteAtEnd(Head );

              deletionAtPosition(Head ,5);
           
                
               cout<<endl;
                linkedListTraversal(Head);

    return 0;
}