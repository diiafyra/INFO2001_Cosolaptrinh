/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex8;

/**
 *
 * @author DELL
 */
import java.util.Scanner;
class Stdi4 {
    private String name;
    private double mark;
    
    public Stdi4(String name, double mark){
        this.name = name;
        this.mark = mark;
    }
    
    public double getMark(){
        return mark;
    }
    public String getName(){
        return name;
    }
}
public class Ex8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Nhập vào số lượng sinh viên: ");
        int n = scanner.nextInt();
        Stdi4[] stds = new Stdi4[n];
        int i;
        for(i = 0; i < n; i++){
            System.out.printf("Nhập vào thông tin sinh viên thứ %d: ", i+1);
            System.out.print("\nTên: ");
            scanner.nextLine();
            String name = scanner.nextLine();
            System.out.print("Điểm: ");
            double mark = scanner.nextDouble();
            stds[i] = new Stdi4(name, mark);
        }
        System.out.println("\nThông tin các sinh viên: ");
        System.out.printf("STT\t%-40sĐiểm\n", "Tên");
        for(i = 0; i < n; i++){
            Stdi4 std = stds[i];
            System.out.printf("%d\t%-40s%.2f\n", i+1, std.getName(), std.getMark());
        }
        double totalM=0;
        for(i=0; i<n; i++){
            totalM += stds[i].getMark();
        }
        double averageM=totalM/n;
        System.out.println("Điểm trung bình: " + averageM);
        // TODO code application logic here
    }
    
}
