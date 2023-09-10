#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i, *result, *numIndices;

	/*Create an array to store the result (indices of the two numbers).*/

	result = (int*)malloc(2 * sizeof(int));

	/* Create an array to store the indices of elements in 'nums'.*/
	numIndices = (int*)malloc(sizeof(int) * numsSize);

	/* Initialize 'numIndices' with -1 to indicate that elements haven't been seen yet.*/
	for (i = 0; i < numsSize; i++)
	{
		numIndices[i] = -1;
	}

	/* Iterate through the array.*/
	for (i = 0; i < numsSize; i++)
	{
		/* Calculate the complement of the current number with respect to the target.*/
		int complement = target - nums[i];

		/* Check if the complement exists in 'numIndices' and is not the same as the current index.*/
		if (complement >= 0 && complement < numsSize && numIndices[complement] != -1)
		{
			/* Set the result array with the indices of the two numbers.*/
			result[0] = numIndices[complement];
			result[1] = i;
			/* Set the returnSize to 2.*/
			*returnSize = 2;
			/* Free the memory used by 'numIndices'.*/
			free(numIndices);
			return result;
		}

		/* If the complement is not found, update 'numIndices' with the current index.*/
		numIndices[nums[i]] = i;
	}

	/* Free the memory used by 'numIndices'.*/
	free(numIndices);

	/* If no solution is found, return NULL.*/
	return (NULL);
}
