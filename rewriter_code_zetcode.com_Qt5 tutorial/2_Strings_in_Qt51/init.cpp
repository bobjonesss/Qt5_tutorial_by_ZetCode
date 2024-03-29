#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString str1 = "The night train";
   out << str1 << "\n"; //endl;

   QString str2("A yellow rose");
   out << str2 << "\n"; //endl;

   QString str3 {"An old falcon"};
   out << str3 << "\n"; //endl;

   std::string s1 = "A blue sky";
   QString str4 = s1.c_str();
   out << str4 << "\n"; //endl;

   std::string s2 = "A thick fog";
   QString str5 = QString::fromLatin1(s2.data(), s2.size());
   out << str5 << "\n"; //endl;

   char s3[] = "A deep forest";
   QString str6(s3);
   out << str6 << "\n"; //endl;

   return 0;
}
