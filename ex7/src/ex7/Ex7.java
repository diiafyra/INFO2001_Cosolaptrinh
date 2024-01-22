/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex7;

/**
 *
 * @author DELL
 */
import java.util.Scanner;
public class Ex7 {
    /**
     * @param args the command line arguments
     */
    public static String reverseStr(String str){
        StringBuilder reversedStr = new StringBuilder(str);
        //StringBuilder là một lớp để tạo và change chuỗi mà không cần tạo bản sao mới
        //hỗ trợ append, insert, delete, replace, reverse,...
        reversedStr.reverse();
        return reversedStr.toString();
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Nhập vào một chuỗi: ");
        String input = scanner.nextLine();
        String reversedStr = reverseStr(input);
        System.out.print("Chuỗi đảo ngược là: " + reversedStr);
    }
    
}
