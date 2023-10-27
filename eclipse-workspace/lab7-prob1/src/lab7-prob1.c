/*
 ============================================================================
 Name        : lab7-prob1.c
 Author      : ImangaliKobey
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
/*
You are not allowed to change:
-anything in the given struct or change its name
-anything in the given functions' signatures (its type, name; number of parameters, their types or names)
-otherwise, 0 pts for the given function
*/

typedef struct
{
    size_t id;
    char firstname[20];
    char lastname[20];
    size_t NUMBER_OF_COURSES;
    double *grade; // array
} Student;

// returns the average grade of the student with id 'student_id'
// average must be calculated based on NUMBER_OF_COURSES
// if you use hardcoding (like 4 instead of NUMBER_OF_COURSES), you'll get 0 pts for the function
double AverageGradeOfAStudent(Student stud[], size_t student_id){
	double total=0;//variable for total
	double average=0;//variable for average
	for(size_t i=0;i<stud[student_id].NUMBER_OF_COURSES;i++){
		total+=stud[student_id].grade[i];//adding the grade of course
	}
	average=total/stud[student_id].NUMBER_OF_COURSES;//dividing total to the number of courses
    /*
    Write your code here
    */
    return average; // change the return if necessary
}

// if student's average grade is less than 62.93, return true
// otherwise return false. Must call AverageGradeOfAStudent()
_Bool LosingStipendChecker(Student stud[], size_t student_id){
	double average=AverageGradeOfAStudent(stud,student_id);//finding average grade through the first function
	if(average<62.93){//grade is less than 62.93 return true
		return 1;
	}
	else{//else return 0
		return 0;
	}
    /*
    Write your code here
    */ // change the return if necessary
}

// prints the list of students who lost stipend, must call functions AverageGradeOfAStudent() and LosingStipendChecker()
// returns the number of students who lost stipends.
size_t StipendLosingStudents(Student stud[], size_t array_size){
	size_t count=0;
    printf("\nStudents who won't have a stipend for the next semester:");
    printf("\nstud_id\tFname\tLname\tAverage");
    for(size_t i=0;i<array_size;i++){
    double average=AverageGradeOfAStudent(stud,i);
    _Bool lose=LosingStipendChecker(stud,i);
    if(lose){
    	printf("\n%zu\t%s\t%s\t%.2lf",stud[i].id, stud[i].firstname, stud[i].lastname,average);
    	count++;
    }
    }
    printf("\n");
    /*
    Write your code here
    */
    return count; // change the return if necessary
}

// prints the list of all students and their average grades
void AverageGrades(Student stud[], size_t array_size){
    printf("\nstud_id\tFname\tLname\tAverage\n"); // don't change it. If mac user, recheck from https://www.onlinegdb.com/online_c_compiler
    for(size_t i=0;i<array_size;i++){
        double average=AverageGradeOfAStudent(stud,i);
        printf("%zu\t%s\t%s\t%.2lf\n",stud[i].id, stud[i].firstname, stud[i].lastname,average);
    }
    /*
    Write your code here
    */
}

// returns a student who has a max grade on the course with index 'course_index'
Student StudentWithMaxGradeOnCourse(Student stud[], size_t array_size, size_t course_index){
	size_t max=0;//it is just index
	for(size_t i=0;i<array_size;i++){
		if(stud[max].grade[course_index]<stud[i].grade[course_index]){//comparing it to the current value
			max=i;//assigning new maximum index
		}
	}
	return stud[max];
    /*
    Write your code here
    */
  // change the return if necessary
}


// YOU ARE NOT ALLOWED TO CHANGE ANYTHING IN MAIN, EXCEPT FOR fopen() function, for testing
// Before you submit, you have to remove all your paths from fopen() function and it must contain only the filename without any folders or paths
int main(){
    FILE *file = fopen("Grades_1st_year_students-W.txt", "r");

    if(file == NULL){
        printf("can't open the file");
        return 1;
    }

    char ch;
    size_t number_of_students = 0, number_of_tabs = 0, number_of_courses = 0;
    while((ch = (char) getc(file)) != EOF){
        if(ch == '\n')
            number_of_students++;
    }
    file = fopen("Grades_1st_year_students-W.txt", "r"); // we already read the file once, to count number of students, now need to reopen it
    while((ch = (char) getc(file)) != '\n'){   // count the number of courses
        if(ch == '\t')
            number_of_tabs++;
    }
    char stud_id[20] = {0}, fname[20] = {0}, lname[20] = {0};
    number_of_courses = (number_of_tabs - 3) / 2 + 1;
    //Student students[10] = {[0 ... 9] = {.id = 0, .firstname = "\0", .lastname = "\0", .NUMBER_OF_COURSES = 4, .grade = {-1, -1, -1, -1}}};
    Student students[number_of_students];
    for(size_t i = 0; i < number_of_students; i++){ // this method of initialization doesn't work if some struct elements are constants
        students[i] = (Student) {.id = 0, .firstname = "\0", .lastname = "\0", .NUMBER_OF_COURSES = number_of_courses};//, .grade = {-1, -1, -1, -1}};
        students[i].grade = malloc(sizeof(double) * students[i].NUMBER_OF_COURSES);
    }

    char course_names[students[0].NUMBER_OF_COURSES][8];
    const size_t STUDENTS_ARRAY_SIZE = sizeof(students)/sizeof(students[0]);
    file = fopen("Grades_1st_year_students-W.txt", "r");

    fscanf(file, "%s %s %s", stud_id, fname, lname); // reading the first three elements - id, fname, lname on the top row
    printf("\nstud_id\tFname\tLname\t");
    for(size_t i = 0; i < students[0].NUMBER_OF_COURSES; i++){ // reading the course names, based on number of courses
        fscanf(file, "%s", course_names[i]);
        printf("%s\t", course_names[i]);
    }
    printf("\n");

    size_t i = 0;
    while(!feof(file)){ // checking if we did read them correctly
        fscanf(file, "%llu %s %s", &students[i].id, students[i].firstname, students[i].lastname);
        printf("%llu\t%s\t%s\t", students[i].id, students[i].firstname, students[i].lastname);

        for(size_t j = 0; j < students[i].NUMBER_OF_COURSES; j++){ // reading the course names, based on number of courses
            fscanf(file, "%lf", &students[i].grade[j]);
            printf("%.2lf\t", students[i].grade[j]);
        }
        printf("\n");
        i++;
    }

    AverageGrades(students, STUDENTS_ARRAY_SIZE);
    size_t stipendLosers = StipendLosingStudents(students, STUDENTS_ARRAY_SIZE);
    printf("There are %llu students who'll lose stipends in the next semester.\n", stipendLosers);

    for(i = 0; i < students[0].NUMBER_OF_COURSES; i++){
        printf("\nIn course %s the max grade belongs to %s %s, because their grade is %.2lf", course_names[i],
        StudentWithMaxGradeOnCourse(students, STUDENTS_ARRAY_SIZE, i).firstname, StudentWithMaxGradeOnCourse(students, STUDENTS_ARRAY_SIZE, i).lastname,
         StudentWithMaxGradeOnCourse(students, STUDENTS_ARRAY_SIZE, i).grade[i]);
    }

    for(i = 0; i < number_of_students; i++){
        free(students[i].grade);
    }
    return 0;
}
