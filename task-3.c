#include <stdio.h>

int main()
{
	long long counter = 0;
	for (int i_1 = 0; i_1 < 4; i_1++)
	{
		for (int i_2 = 0; i_2 < 4; i_2++)
		{
			for (int i_3 = 0; i_3 < 4; i_3++)
			{
				for (int i_4 = 0; i_4 < 4; i_4++)
				{
					for (int i_5 = 0; i_5 < 4; i_5++)
					{
						for (int i_6 = 0; i_6 < 4; i_6++)
						{
							for (int i_7 = 0; i_7 < 4; i_7++)
							{
								for (int i_8 = 0; i_8 < 4; i_8++)
								{
									for (int i_9 = 0; i_9 < 4; i_9++)
									{
										for (int i_10 = 0; i_10 < 4; i_10++)
										{
											for (int i_11 = 0; i_11 < 4; i_11++)
											{
												for (int i_12 = 0; i_12 < 4; i_12++)
												{
													for (int i_13 = 0; i_13 < 4; i_13++)
													{
														for (int i_14 = 0; i_14 < 4; i_14++)
														{
															for (int i_15 = 0; i_15 < 4; i_15++)
															{
																for (int i_16 = 0; i_16 < 4; i_16++)
																{
																	if (i_1 != 0 && i_2 != 0 && i_3 != 0 && i_4 != 0 && i_5 != 0 && i_6 != 0 && i_7 != 0 && i_8 != 0 && i_9 != 0 && i_10 != 0 && i_11 != 0 && i_12 != 0 && i_13 != 0 && i_14 != 0 && i_15 != 0 && i_16 != 0)
																	{
																		continue;
																	}
																	if (i_1 != 1 && i_2 != 1 && i_3 != 1 && i_4 != 1 && i_5 != 1 && i_6 != 1 && i_7 != 1 && i_8 != 1 && i_9 != 1 && i_10 != 1 && i_11 != 1 && i_12 != 1 && i_13 != 1 && i_14 != 1 && i_15 != 1 && i_16 != 1)
																	{
																		continue;
																	}
																	if (i_1 != 2 && i_2 != 2 && i_3 != 2 && i_4 != 2 && i_5 != 2 && i_6 != 2 && i_7 != 2 && i_8 != 2 && i_9 != 2 && i_10 != 2 && i_11 != 2 && i_12 != 2 && i_13 != 2 && i_14 != 2 && i_15 != 2 && i_16 != 2)
																	{
																		continue;
																	}
																	if (i_1 != 3 && i_2 != 3 && i_3 != 3 && i_4 != 3 && i_5 != 3 && i_6 != 3 && i_7 != 3 && i_8 != 3 && i_9 != 3 && i_10 != 3 && i_11 != 3 && i_12 != 3 && i_13 != 3 && i_14 != 3 && i_15 != 3 && i_16 != 3)
																	{
																		continue;
																	}
																	counter += 1;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
printf("%lld", counter);
}