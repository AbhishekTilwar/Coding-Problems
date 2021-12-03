package com.company;
import org.w3c.dom.ls.LSOutput;

import java.sql.SQLOutput;
import java.util.*;
public class Main {

    public static void main(String[] args) {
        // write your code here
        
        // initalize object for taking input
        Scanner sc = new Scanner(System.in);
        
        // String input
        String name=sc.next();
        //String name1 =sc.nextLine();
        System.out.println(name);
        
        //INT input
        int a = sc.nextInt();
        //int arr[a] = sc.nextInt();

        
        // IF-ELSE 
        /*
        if(a==1){
            System.out.println("Hello");
        }
        if(a==2){
            System.out.println("Namaste");
        }
        else{
            System.out.println("Bye");
        }*/

        //SWITCH
        /* switch (a){

            case 1:
                System.out.println("Hey, I am Abhishek");

            case 2:
                System.out.println("Welcome");
        }*/
    
        //WHILE
        /* while (a > 0) {
            for (int i = 0; i < a; i++) {
                System.out.println(i);
            }
            a--;
        }*/
        
        //ARRAY
        
        int arr[];
        arr= new int[10];

        for(int i=0; i<a; i++){
            arr[i]= sc.nextInt();
        }

        for(int i=0; i<a; i++){
            System.out.print(arr[i]+" ");

        
    }
}
