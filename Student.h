class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  private:
  int studentId;
  char name[20];

public:

  void assignDetails(int sId,const char sName[]);
  void display();
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
};
