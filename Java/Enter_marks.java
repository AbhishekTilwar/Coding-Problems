package com.company;
import org.w3c.dom.ls.LSOutput;

import java.sql.SQLOutput;
import java.util.*;
public class Main {

    public static void main(String[] args) {
            Scanner sc= new Scanner(System.in);
            int a = sc.nextInt();

        do{
            if(a==0 || a==1) {
                int marks = sc.nextInt();
                if (marks <= 100) {
                    if (marks >= 90) {
                        System.out.println("This is Good");
                    } else if (marks <= 89 && marks >= 60) {
                        System.out.println("This is also Good");
                    } else if (marks <= 59 && marks >= 0) {
                        System.out.println("This is Good as well");
                        if (marks == 0) {
                            System.exit(0);
                        }
                    }

                }
            }
            else{
                System.out.println("Invalid Input");
                System.exit(0);
            }

        }while(a!=0);

    }
 }
