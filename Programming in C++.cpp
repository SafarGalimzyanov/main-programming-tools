/*
  struct Cls {
  Cls(char c, double d, int i);
  private:
      char c;
      double d;
      int i;
  };
*/

//Доступ к полю c объекта cls.
char& get_c(Cls& cls) {
    return *(char*)&cls;
}

//Доступ к полю d объекта cls.
double& get_d(Cls& cls) {
    return *((double*)&cls + 1);
}

//Доступ к полю i объекта cls.
int& get_i(Cls& cls) {
    return *((int*)&cls + 4);
}