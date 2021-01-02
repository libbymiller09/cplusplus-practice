#include "student_records.cpp"
using namespace student_init;

int main() {
    
    populate_student_data(new_students, student_count);
    print_student_data(new_students, student_count);
    
    return 0;
}
