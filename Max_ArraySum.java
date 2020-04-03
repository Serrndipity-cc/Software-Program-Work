package test;

import java.util.Scanner;

public class Max_ArraySum {

	public static int findSubArrayWithMaxSum(int[] array) {
		int flag = 0;
		if (array == null || array.length == 0) {
			return 0;
		}
		if (array.length == 1) {
			return array[0];
		}
		for (int i = 0; i < array.length; i++) {
			if (array[i] > 0) {
				flag = 1;
			}
		}
		if (flag == 1) {
			// 初始化累加值和最大值为数组第一个元素
			int sum = array[0];
			int maxSum = array[0];
			// 记录计算sum的起始位置
			int start = 0;
			// 记录当前最大值对应的起始位置
			int maxStart = 0;
			// 记录当前最大值对应的终止位置
			int maxEnd = 0;
			// 从数组第二元素开始遍历
			for (int i = 1; i < array.length; i++) {
				// 如果当前累加值为负数，则无需在累加，因为加上当前元素值后，无论如何都不会比当前元素的值大
				// 所以将累加值变量更新为当前元素值，并且将起始位置更新为当前元素的位置
				// 如果不为负数，则累加当前元素值
				if (sum < 0) {
					sum = array[i];
					start = i;
				} else {
					sum += array[i];
				}

				// 如果当前累加值大于最大值，则更新最大值，同时更新最大值对应的起始终止位置
				if (sum > maxSum) {
					maxSum = sum;
					maxStart = start;
					maxEnd = i;
				}
			}

			// int[] result = new int[maxEnd - maxStart + 1];

			System.out.print("最大连续子数组为：");
			for (int i = maxStart; i <= maxEnd; i++) {
				// result[i - maxStart] = array[i];
				System.out.print("  " + array[i]);
			}
			System.out.println();

			return maxSum;
		} else
			return 0;

	}

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner sc = new Scanner(System.in);
		while (true) {
			int count = sc.nextInt();
			sc.nextLine();
			int flag = 0;
			int[] array = new int[20];
			try {
				for (int i = 0; i < count; i++) {
					array[i] = sc.nextInt();
					if (array[i] > 0)
						flag = 1;
				}

				if (flag == 1) {
					int result = findSubArrayWithMaxSum(array);
					System.out.println("最大连续子数组的值为：" + result);
				} else
					System.out.println("最大连续子数组的值为：" + 0);

				/*
				 * for (int i : result) { System.out.print(i + " "); }
				 */

			} catch (Exception e) {
				// TODO: handle exception
				System.out.println("array is null or empty.");
			}

		}
	}
}
