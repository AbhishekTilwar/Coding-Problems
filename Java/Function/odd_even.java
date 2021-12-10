package com.company;
import org.w3c.dom.ls.LSOutput;

import java.sql.SQLOutput;
import java.util.*;
public class Main {
    
    
    public static int check(int n){
        
        int ans;

        if(n%2==0){
            ans=0;
        }
        else{
            ans=1;
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n =sc.nextInt();


        if(check(n)==0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }

        return;

    }
}
