#include "includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int x, y;

	//////////////////////////////////
		printf("simple test\n");
	//////////////////////////////////

	x = ft_printf("ft:[%c]", 'c');
	printf("\n");
	y = printf("og:[%c]", 'c');
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%s]", "");
	printf("\n");
	y = printf("og:[%s]", "");
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%p]", 0);
	printf("\n");
	y = printf("og:[%p]", 0);
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%d]", 42);
	printf("\n");
	y = printf("og:[%d]", 42);
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%i]", 42);
	printf("\n");
	y = printf("og:[%i]", 42);
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%x]", 42);
	printf("\n");
	y = printf("og:[%x]", 42);
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%X]", 42);
	printf("\n");
	y = printf("og:[%X]", 42);
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);

	x = ft_printf("ft:[%%]");
	printf("\n");
	y = printf("og:[%%]");
	printf("\nft ret : %d\n", x-5);
	printf("og ret : %d\n\n", y-5);



	// //////////////////////////////////
	// 	printf("width test\n");
	// //////////////////////////////////

	// x = ft_printf("ft:[%4s]", "koto");
	// printf("\n");
	// y = printf("og:[%4s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%6s]", "koto");
	// printf("\n");
	// y = printf("og:[%6s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%2s]", "koto");
	// printf("\n");
	// y = printf("og:[%2s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%s]", "koto");
	// printf("\n");
	// y = printf("og:[%s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);


	// x = ft_printf("ft:[%-4s]", "koto");
	// printf("\n");
	// y = printf("og:[%-4s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%-6s]", "koto");
	// printf("\n");
	// y = printf("og:[%-6s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%-2s]", "koto");
	// printf("\n");
	// y = printf("og:[%-2s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);



	// //////////////////////////////////
	// 	printf("precision test\n");
	// //////////////////////////////////


	// x = ft_printf("ft:[%.4d %s %%]", 42, "koto");
	// printf("\n");
	// y = printf("og:[%.4d %s %%]", 42, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%.6s]", "koto");
	// printf("\n");
	// y = printf("og:[%.6s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%.2s]", "koto");
	// printf("\n");
	// y = printf("og:[%.2s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%s]", "koto");
	// printf("\n");
	// y = printf("og:[%s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);


	// x = ft_printf("ft:[%.8s]", "koto");
	// printf("\n");
	// y = printf("og:[%.8s]", "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);




	// //////////////////////////////////
	// 	printf("asterisk test\n");
	// //////////////////////////////////


	// x = ft_printf("ft:[%*s]",-4, "koto");
	// printf("\n");
	// y = printf("og:[%*s]",-4, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%*s]",0, "koto");
	// printf("\n");
	// y = printf("og:[%*s]",0, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%*s]",1, "koto");
	// printf("\n");
	// y = printf("og:[%*s]",1, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%.*s]",0, "koto");
	// printf("\n");
	// y = printf("og:[%.*s]",0, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%.*s]",1, "koto");
	// printf("\n");
	// y = printf("og:[%.*s]",1, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%.*s]",-1, "koto");
	// printf("\n");
	// y = printf("og:[%.*s]",-1, "koto");
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);



	// //////////////////////////////////
	// 	printf("get crazy test\n");
	// //////////////////////////////////

	// x = ft_printf("ft:[%d %s %x]", 54, "koto", 1234567);
	// printf("\n");
	// y = printf("og:[%d %s %x]", 54, "koto", 1234567);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",-2147483648);
	// printf("\n");
	// y = printf("og:[%d]",-2147483648);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",-2147483648);
	// printf("\n");
	// y = printf("og:[%d]",-2147483648);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",-2147483649);
	// printf("\n");
	// y = printf("og:[%d]",-2147483649);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",2147483646);
	// printf("\n");
	// y = printf("og:[%d]",2147483646);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",2147483647);
	// printf("\n");
	// y = printf("og:[%d]",2147483647);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);

	// x = ft_printf("ft:[%d]",2147483648);
	// printf("\n");
	// y = printf("og:[%d]",2147483648);
	// printf("\nft ret : %d\n", x-5);
	// printf("og ret : %d\n\n", y-5);


	return 0;
}

