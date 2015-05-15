void  setup ()
{
  pinMode (5, OUTPUT);      
  pinMode (6, OUTPUT);      
  pinMode (7, OUTPUT);      
  pinMode (8, OUTPUT);      
  pinMode (9, OUTPUT);     
  pinMode (10, OUTPUT);     
  pinMode (11, OUTPUT);      
  pinMode (12, OUTPUT);     
  
  digitalWrite (7, HIGH);   
  digitalWrite (8, LOW);     
  digitalWrite (9, LOW);  
  digitalWrite (10, HIGH);     
  digitalWrite (11, LOW);    
  digitalWrite (12, LOW);
  delay(1000);
}


void  loop ()
{
  digitalWrite (7, HIGH);   
  digitalWrite (8, LOW);     
  digitalWrite (9, LOW);  
  digitalWrite (10, LOW);     
  digitalWrite (11, LOW);    
  digitalWrite (12, HIGH);
  delay(4000);
    
  digitalWrite (7, HIGH);   
  digitalWrite (8, LOW);     
  digitalWrite (9, LOW);  
  digitalWrite (10, LOW);     
  digitalWrite (11, HIGH);    
  digitalWrite (12, LOW);
  delay(1000);
    
  digitalWrite (7, HIGH);   
  digitalWrite (8, LOW);     
  digitalWrite (9, LOW);  
  digitalWrite (10, HIGH);     
  digitalWrite (11, LOW);    
  digitalWrite (12, LOW);
  delay(1000);
  
  digitalWrite (7, LOW);   
  digitalWrite (8, LOW);     
  digitalWrite (9, HIGH);  
  digitalWrite (10, HIGH);     
  digitalWrite (11, LOW);    
  digitalWrite (12, LOW);
  delay(4000);
    
  digitalWrite (7, LOW);   
  digitalWrite (8, HIGH);     
  digitalWrite (9, LOW);  
  digitalWrite (10, HIGH);     
  digitalWrite (11, LOW);    
  digitalWrite (12, LOW);
  delay(1000);
  
  digitalWrite (7, HIGH);   
  digitalWrite (8, LOW);     
  digitalWrite (9, LOW);  
  digitalWrite (10, HIGH);     
  digitalWrite (11, LOW);    
  digitalWrite (12, LOW);
  delay(1000);
}
