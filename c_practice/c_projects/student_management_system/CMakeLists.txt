cmake_minimum_required(VERSION 3.10)
project(student_management_system C)
include_directories(include)
add_executable(app src/addStudent.c  
	 	   src/deleteStudent.c  
		   src/searchStudent.c  
		   src/updateStudent.c  
		   src/viewStudents.c
		   test/main.c
		   test/students.txt
		   )

