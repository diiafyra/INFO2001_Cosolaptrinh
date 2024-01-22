/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex3;

/**
 *
 * @author DELL
 */
import java.util.Scanner;

public class Ex3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a;
        System.out.print("Nhập số lượng phần tử: ");
        a = Integer.parseInt(scanner.nextLine());
        int[]arr = new int[a];
        int i=0, sum=0; 
        for(i=0; i<a; i++){
            System.out.print("Nhap vao gia tri phan tu thu " +(i+1));
            arr[i] = Integer.parseInt(scanner.nextLine());
            sum = sum + arr[i];    
        }
        System.out.print("Tong: " +sum);
// TODO code application logic here
    }
    
}
