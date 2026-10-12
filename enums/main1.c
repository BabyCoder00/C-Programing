#include <stdio.h>

typedef enum{
    SUCESS, FAILURE, PENDING
}Status;
void connectStatus(Status Status);
int main(){

    Status status = SUCESS;

    connectStatus(status);



    return 0;
}

void connectStatus(Status Status){

    switch (Status)
    {
    case SUCESS:
        printf("connection was sucessful\n");
        break;
    
    case FAILURE:
        printf("counld not connect\n");
        break;
    
    case PENDING:
        printf("connecting\n");
        break;
        
    default:
        break;
    }
}