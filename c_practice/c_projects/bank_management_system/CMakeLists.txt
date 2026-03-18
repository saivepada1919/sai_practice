cmake_minimum_required(VERSION 3.10)
project(banking_system C)
include_directories(include)
add_executable(app src/createAccount.c
		   src/deposit.c
		   src/withdraw.c
		   src/checkBalance.c
	           test/main.c)
