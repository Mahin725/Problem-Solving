package main

import "fmt"


// function
func Print(n int ){
	for i := 1; i <= n; i++ {
		if(i==n){
			fmt.Print(i)
		}else{

			fmt.Print(i," ")
		}
	}
}

func main(){
	var n int
	fmt.Scan(&n)
	Print(n)
}