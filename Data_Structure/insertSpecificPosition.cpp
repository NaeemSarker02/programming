void pop_at(int position) {     
      if(position < 1) {
        cout<<"\nposition should be >= 1.";
      } else if (position == 1 && head != NULL) { 
        Node* nodeToDelete = head;
        head = head->next;
        free(nodeToDelete);
      } else {
        Node* temp = head;
        for(int i = 1; i < position-1; i++) {
          if(temp != NULL) {
            temp = temp->next;
          }
        }
        if(temp != NULL && temp->next != NULL) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            free(nodeToDelete); 
        } else {
          cout<<"\nThe node is already null.";
        }       
      }
    } 
