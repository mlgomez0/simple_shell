# Simple Shell

This is a single shell program made with C language as part of the fullstack software development program for Holberton School Medellín, first trimester.
A shell is a program that interprates command lines typed by an user using the keyboard to control the computer.


# How to run this shell program:
Clone this repo: ```git clone git@github.com:mlgomez0/simple_shell.git```
Compile: ```gcc -Wall -Werror -Wextra -pedantic *.c -o hsh```
To run interactively: ```./hsh```
To run in non-interactive mode: ```echo "ls -l | ./hsh```
# Example:
`ls -l`
`total 28`
`drwxrwxr-x  5 vagrant vagrant 4096 Nov  5 14:40 Betty`
`drwxrwxr-x 24 vagrant vagrant 4096 Nov 12 15:30 holbertonschool-low_level_programming`
`drwxrwxr-x 15 vagrant vagrant 4096 Nov 10 18:14 holberton-system_engineering-devops`
`-rw-rw-r--  1 vagrant vagrant   28 Nov 15 22:22 README.md`
`drwxrwxr-x  3 vagrant vagrant 4096 Nov 19 14:28 shell_project`
`drwxrwxr-x  3 vagrant vagrant 4096 Nov 21 19:55 shell_tests`
`drwxrwxr-x  3 vagrant vagrant 4096 Nov 20 20:40 simple_shell`


## Files
main.c
built_in_handler.c
bult_in_funcs.c
exec_handler.c
_execut.c
func_env.c
get_string.c
token_arg.c
holberton.h



## Flow chart
[https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=flow-chart-with-drawio.html#R7V1tc6O2Fv4t94Nnsp1JhnfwxzjZ7L2dbe%2FOpp3evV88BGSbBpALOHH66yuBxJuEDQGBnSSdzhpJIHHedPScIzFTb4L9l8jebn6BLvBniuTuZ%2BrtTFFkTbXQP7jkhZaQgnXkuaSoKLj3%2FgakUCKlO88FcaVhAqGfeNtqoQPDEDhJpcyOIvhcbbaCfrXXrb0mPUpFwb1j%2B4Bp9ofnJpus1FLMovzfwFtvaM%2ByMc9qHmzncR3BXUj6mynqKv3LqgObPov0G29sFz6XitTPM%2FUmgjDJfgX7G%2BBj2lKyZffdNdTm445AmLS5YSWZMgBAdSTFkTXzkjzgyfZ3gL6B4aNHLVYQPRFT3IdRWmP8tcOjXKBXVFRtbrrlImON%2Fw1sL7xy6BPQKLKHZJWEAMkLJXr87AW%2BHaKrxfPGS8D91nZw1TOSMTwAz%2FdvSO8hTJvRO%2B5KVWg4i%2Bsb61YlYy6VK3f6wrwh5Xd24PlYPH%2BzNzCwUekmCXx0LeMHJxF8BLXeIBqPl%2BBbdAm3wZfhGl0qxdVvcIsfoZFO7snbSSxfKKVBlIB9qYjw6QuAAUiiF9SE1BrkIUSlDHr9XAiobJGyTUk4TZUU2kQp1vmj896%2BIyWywzUaa96dUu1OYXvjdaao1b5sPwFRaCdggXUiLssi%2BlF6zaIolVC%2BtN5%2F2Qd3%2F3fWT7eG9t2Kfp7PrW%2BXMiuzLsQj3Xjp%2B%2FgQ8YSI4ENEpY%2FWXiwjsIVR8okRx5I48MQxVXLgpi0Y5japVWtmqzXqc8gvKxz6Gwd4XSF8ZyorHMvQTDFk17a4NNiv8Qxx9bANwquUE0iPdonvhUi7qO2WcmtQpuFhZrempHSlV0gps4TUWDrSsgj4duI9VaeFA4r0DXqpmSSdX8rVzi%2Fpc%2Bkj4GoVg0SIWqivYtjW38Vvlh3yVMwwTYb2wEUeB7lE9mcD1zC0%2Fc9FacnCYAUp2nyF2SSDCv8ESfJC3Cd7l8DqLAb2XvI%2FfDuieXb1o1RzuydPTi9e6EWI3rR0E778Ua4rbkuv6H3VGRNNtvjv7o4rSg3WMYa7yAGHpI1QMbGjNTgkltQKYhofFMrW8tTPdpqMKi4RvVBJeiGhl8HXyH24%2BMTOVIzkVOWCNzeVZED83KRKeru5SdFF0ddi6OtsbEzfnzI610lKa39aIkmK2frMaBDPgKE%2FNZXOC5rGXBAdZ8JDxrGvD3lBvkz4bzYZjsYtvaUjIR%2FyGntxiyonZ42BnOiwQmu6oEjpexlnBL5GTUIYBbbPrjgIQ4liJcgkhbjo4urq6lNpHZJ1dCb6pbfUL3Ec0xmOUdUghAZ74CxXu5DQudnNcO14UyVtXCWtAHoqZs3n0GSeEuhiKFofPjsX9FlhP%2Bw8P1l64XJjh64Pore42lb0CVbbepvltvEOl9tzdiGYTZdebg0kdkZNtmCJZHWWwnPo10xfzPTb%2FI6ZuUCWY2bentZka3aVGuXUJts5uwpcQez7ZKiItEbOL55yfRCu0RAVww4wOcOHODPGdT7CFcNC1l%2BdtkQgjNNXHlrDOOJwnLnGmX%2FGx3FyuTwP4GBKHEdiGTQqdqBMAB5I6V93cToKIcwJH49CCLJEhGQ4DCG99TqK7JdSgy0WtLhZ8mpuCL0uhCx74LBTPOvvt7ER3aDDM7MAk0GHc2Na9W%2Bv%2FSNqcVsgcG4NrcT9Jl8OEJgCFvpC4vtSqI3KKc89MA%2FddhUzEhKhRdZDqo2d4YuBlFWu2q05x%2FGROI6PJczvYTHC7yDZRdj5vaiSM8MxWBijJy40EGFrNtAyWcLKHMJqqijCzhnCvgBWItHbJS1W%2FRzYwfa9dYguHUTJdP2HaeU5tn9NKgLPdf0mHKPKNGFcMaviLhsKwxaN5%2BcLC9dS5Sqx5Vf43rhyWbNC%2BTp7OrawyQqFGZIHtzn9F7BVc6PzFrCizA0D%2FA6bnITMvLME4dNbhEwnSVCSJa2qbh%2BYaZ48YzCim4Om%2FODjn81RyyXYg8NxzaULfC9orn8EL82VEWf2njbk2T3iMyEMy4yedTz7WC3MfGeXfBitgYyWJn3YLH7Qt4PJyu0ODke6SxdWwzvMqtZcOEi0bzDvnskPjCSQX%2BHTyQWCciU%2BCxPE5yeLPfSPBBUMP7kw0KiBod7ycQKRIYM3UTXTTFRkyOi8RnmvkSGDRV7aMKwbTH9m7JgMprd0hvZvFaanInEUpjeJC3EUpreIe3MiML3Juj6vg%2BnL%2FpCX3lmHdwbG6btr66nh9BabsFIAZPVst9Fg%2Bu50PTWY3mLdv7OH6btz5dRgeov1uc4dpe%2FOlJND6S3lgA1KU50F2p8BlhYTYvZ8emqT%2BkYlz6jwk44lMM3K6UtFNtMACUxNDB7QnVKmcqfq76bwsg1fD37m%2BzmEwJ94r76O%2F%2BuOgWZ%2F3TFQdKuR%2Fs16JrzjB9tRQpRBUbmS1x1H%2Fwjo8DWMvl63JPisSbgLbmBwqN2x7Wm0Hv2PWzQ3QMK2jMGWVYopsdTcJpwvlqqyDkL1tAEpgalt26WWicMdvEctQ1DTQF4zatMbmuxN7unPHlBft5V9aGQy5%2Fp5QGGTnj0gMwz6yFlvEKejfp%2BqtfT7VH0qv%2B%2FguIXi02emlJPh0xpL%2B7emke3nwuMq13abiGqclsqxOzeu4xhDPYoUgACmQ7F9HzrUR6Eb5mn4dxuBJw%2Fu4sJ9EQtv9HZPVKmle6KJck%2B0SSa7IaW9LbBASXgq0s7GaQIq3PBxpt4xfKFzTBF36XI2wRZEHho5Xi%2FRJ3wrioQI%2B7wq65z1tymzoi7ME9fYde%2FnNHGneVof4MSH7mSTa1ldqmldsadocEFlUSCoxi5idjGgy8AU2fL%2BRkoDQ87ueWyp463vJfmKkQk1pkAAwRRQC%2FTAMQ7j6G2%2BNa2l%2BdZFybTOyjRdzBOi%2Fiuj6q%2B%2Ff%2F3aJfeoy2k2KcEZvPMZDwJDlFhMdkkxXfOTs5iDbYqR9RnFgO%2Fj4cwyCdjOhsr82b5Lht6U4LdjxwqdFKjDDQpxQTRhUTadt51jfFQnV%2F%2FzWEBOiOroLOrZhmHd1vNnxo7J1vM6mzkQ5THqdJY4vam%2FdrAZN5rESzYSNvVbbAblGaVf9GdILR1GNVp7ycK2abPO2I8zSlMa3j3mHFUniiHM4NmUsYddln%2BH907GOAhfX1%2B%2F5c1GYmLsptLCKr7HGLsssWBmumfXcS%2FyCDldEnHPza2XjLnTWul7VphMAYPpjnyXWHwtZcD2%2BV1wQNFaHrwqkAOcTVvptvW9l7wHFqgaJ296ZBawjjY9OeA9cEBrm20zBAeY1Mhh0weLc9bf4vbpSY7Jvawj7R%2FuCzEcdGScQ%2BnLZ%2F%2FzQeUYSdoyA%2FuRt1n5WIDEiuikO6PPP5tPYYFIZClSKgi2zr2J1zo3T1jw22QhlHx%2By2wt%2BrGK0oRXBwaBHbqYKKhAeGpBf%2BpaLakrLtH0RFILWn%2BhRcyhqSzsqlc5Na97H1kqA7lreOOunc2hnK%2FnJYXiRPNSsWr4fe5SjMRMXX37zNQG32HNZ6ZaRzHk%2Bk5hwcw0pmXmrP1esx5W1hyHmbWzp%2BemNS4rJ9k2%2BHq2DP%2FVsQaDWduVJUt1%2F0MwY8wT2s9pilIyGu0WbzGrMWQ5N6FjcXPSk0vkDhazyzcGR3JE68fHWXo7G8kqNf1eZ67UVg2zyCSWeVLXDwqw1oN01Dgyjf%2BKTe2bSCL0kwV0ajp9H%2B4VQnwyM0992SVL5ri2ymLRr3fE5rGM2mXNiZ%2FX0SPBXJalSR2MXlPSgV2Abdk8%2FGlYfDbXP3GHZoL5yHyev2c%2BD%2F9xEj6f6xkm4%2FOZJjENFMcrH8HzEcmbDRPJs6yqlHwE8nLpZeNDmX7FiZ3sGj8f7Ww83%2F32n9um%2Bsaj35cr3%2BYc6pFVPiJZXHoTn9B%2BRMvPNxSYfwX4DB1MpLBSepBQD89jJMyjbmtkJsW7YUbqutjVmjpqWrw2juyVq1d0GUE8eRXN8e6VX6ALcIt%2FAA%3D%3D](https://www.draw.io/?lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=flow-chart-with-drawio.html#R7V1tc6O2Fv4t94Nnsp1JhnfwxzjZ7L2dbe%2FOpp3evV88BGSbBpALOHH66yuBxJuEDQGBnSSdzhpJIHHedPScIzFTb4L9l8jebn6BLvBniuTuZ%2BrtTFFkTbXQP7jkhZaQgnXkuaSoKLj3%2FgakUCKlO88FcaVhAqGfeNtqoQPDEDhJpcyOIvhcbbaCfrXXrb0mPUpFwb1j%2B4Bp9ofnJpus1FLMovzfwFtvaM%2ByMc9qHmzncR3BXUj6mynqKv3LqgObPov0G29sFz6XitTPM%2FUmgjDJfgX7G%2BBj2lKyZffdNdTm445AmLS5YSWZMgBAdSTFkTXzkjzgyfZ3gL6B4aNHLVYQPRFT3IdRWmP8tcOjXKBXVFRtbrrlImON%2Fw1sL7xy6BPQKLKHZJWEAMkLJXr87AW%2BHaKrxfPGS8D91nZw1TOSMTwAz%2FdvSO8hTJvRO%2B5KVWg4i%2Bsb61YlYy6VK3f6wrwh5Xd24PlYPH%2BzNzCwUekmCXx0LeMHJxF8BLXeIBqPl%2BBbdAm3wZfhGl0qxdVvcIsfoZFO7snbSSxfKKVBlIB9qYjw6QuAAUiiF9SE1BrkIUSlDHr9XAiobJGyTUk4TZUU2kQp1vmj896%2BIyWywzUaa96dUu1OYXvjdaao1b5sPwFRaCdggXUiLssi%2BlF6zaIolVC%2BtN5%2F2Qd3%2F3fWT7eG9t2Kfp7PrW%2BXMiuzLsQj3Xjp%2B%2FgQ8YSI4ENEpY%2FWXiwjsIVR8okRx5I48MQxVXLgpi0Y5japVWtmqzXqc8gvKxz6Gwd4XSF8ZyorHMvQTDFk17a4NNiv8Qxx9bANwquUE0iPdonvhUi7qO2WcmtQpuFhZrempHSlV0gps4TUWDrSsgj4duI9VaeFA4r0DXqpmSSdX8rVzi%2Fpc%2Bkj4GoVg0SIWqivYtjW38Vvlh3yVMwwTYb2wEUeB7lE9mcD1zC0%2Fc9FacnCYAUp2nyF2SSDCv8ESfJC3Cd7l8DqLAb2XvI%2FfDuieXb1o1RzuydPTi9e6EWI3rR0E778Ua4rbkuv6H3VGRNNtvjv7o4rSg3WMYa7yAGHpI1QMbGjNTgkltQKYhofFMrW8tTPdpqMKi4RvVBJeiGhl8HXyH24%2BMTOVIzkVOWCNzeVZED83KRKeru5SdFF0ddi6OtsbEzfnzI610lKa39aIkmK2frMaBDPgKE%2FNZXOC5rGXBAdZ8JDxrGvD3lBvkz4bzYZjsYtvaUjIR%2FyGntxiyonZ42BnOiwQmu6oEjpexlnBL5GTUIYBbbPrjgIQ4liJcgkhbjo4urq6lNpHZJ1dCb6pbfUL3Ec0xmOUdUghAZ74CxXu5DQudnNcO14UyVtXCWtAHoqZs3n0GSeEuhiKFofPjsX9FlhP%2Bw8P1l64XJjh64Pore42lb0CVbbepvltvEOl9tzdiGYTZdebg0kdkZNtmCJZHWWwnPo10xfzPTb%2FI6ZuUCWY2bentZka3aVGuXUJts5uwpcQez7ZKiItEbOL55yfRCu0RAVww4wOcOHODPGdT7CFcNC1l%2BdtkQgjNNXHlrDOOJwnLnGmX%2FGx3FyuTwP4GBKHEdiGTQqdqBMAB5I6V93cToKIcwJH49CCLJEhGQ4DCG99TqK7JdSgy0WtLhZ8mpuCL0uhCx74LBTPOvvt7ER3aDDM7MAk0GHc2Na9W%2Bv%2FSNqcVsgcG4NrcT9Jl8OEJgCFvpC4vtSqI3KKc89MA%2FddhUzEhKhRdZDqo2d4YuBlFWu2q05x%2FGROI6PJczvYTHC7yDZRdj5vaiSM8MxWBijJy40EGFrNtAyWcLKHMJqqijCzhnCvgBWItHbJS1W%2FRzYwfa9dYguHUTJdP2HaeU5tn9NKgLPdf0mHKPKNGFcMaviLhsKwxaN5%2BcLC9dS5Sqx5Vf43rhyWbNC%2BTp7OrawyQqFGZIHtzn9F7BVc6PzFrCizA0D%2FA6bnITMvLME4dNbhEwnSVCSJa2qbh%2BYaZ48YzCim4Om%2FODjn81RyyXYg8NxzaULfC9orn8EL82VEWf2njbk2T3iMyEMy4yedTz7WC3MfGeXfBitgYyWJn3YLH7Qt4PJyu0ODke6SxdWwzvMqtZcOEi0bzDvnskPjCSQX%2BHTyQWCciU%2BCxPE5yeLPfSPBBUMP7kw0KiBod7ycQKRIYM3UTXTTFRkyOi8RnmvkSGDRV7aMKwbTH9m7JgMprd0hvZvFaanInEUpjeJC3EUpreIe3MiML3Juj6vg%2BnL%2FpCX3lmHdwbG6btr66nh9BabsFIAZPVst9Fg%2Bu50PTWY3mLdv7OH6btz5dRgeov1uc4dpe%2FOlJND6S3lgA1KU50F2p8BlhYTYvZ8emqT%2BkYlz6jwk44lMM3K6UtFNtMACUxNDB7QnVKmcqfq76bwsg1fD37m%2BzmEwJ94r76O%2F%2BuOgWZ%2F3TFQdKuR%2Fs16JrzjB9tRQpRBUbmS1x1H%2Fwjo8DWMvl63JPisSbgLbmBwqN2x7Wm0Hv2PWzQ3QMK2jMGWVYopsdTcJpwvlqqyDkL1tAEpgalt26WWicMdvEctQ1DTQF4zatMbmuxN7unPHlBft5V9aGQy5%2Fp5QGGTnj0gMwz6yFlvEKejfp%2BqtfT7VH0qv%2B%2FguIXi02emlJPh0xpL%2B7emke3nwuMq13abiGqclsqxOzeu4xhDPYoUgACmQ7F9HzrUR6Eb5mn4dxuBJw%2Fu4sJ9EQtv9HZPVKmle6KJck%2B0SSa7IaW9LbBASXgq0s7GaQIq3PBxpt4xfKFzTBF36XI2wRZEHho5Xi%2FRJ3wrioQI%2B7wq65z1tymzoi7ME9fYde%2FnNHGneVof4MSH7mSTa1ldqmldsadocEFlUSCoxi5idjGgy8AU2fL%2BRkoDQ87ueWyp463vJfmKkQk1pkAAwRRQC%2FTAMQ7j6G2%2BNa2l%2BdZFybTOyjRdzBOi%2Fiuj6q%2B%2Ff%2F3aJfeoy2k2KcEZvPMZDwJDlFhMdkkxXfOTs5iDbYqR9RnFgO%2Fj4cwyCdjOhsr82b5Lht6U4LdjxwqdFKjDDQpxQTRhUTadt51jfFQnV%2F%2FzWEBOiOroLOrZhmHd1vNnxo7J1vM6mzkQ5THqdJY4vam%2FdrAZN5rESzYSNvVbbAblGaVf9GdILR1GNVp7ycK2abPO2I8zSlMa3j3mHFUniiHM4NmUsYddln%2BH907GOAhfX1%2B%2F5c1GYmLsptLCKr7HGLsssWBmumfXcS%2FyCDldEnHPza2XjLnTWul7VphMAYPpjnyXWHwtZcD2%2BV1wQNFaHrwqkAOcTVvptvW9l7wHFqgaJ296ZBawjjY9OeA9cEBrm20zBAeY1Mhh0weLc9bf4vbpSY7Jvawj7R%2FuCzEcdGScQ%2BnLZ%2F%2FzQeUYSdoyA%2FuRt1n5WIDEiuikO6PPP5tPYYFIZClSKgi2zr2J1zo3T1jw22QhlHx%2By2wt%2BrGK0oRXBwaBHbqYKKhAeGpBf%2BpaLakrLtH0RFILWn%2BhRcyhqSzsqlc5Na97H1kqA7lreOOunc2hnK%2FnJYXiRPNSsWr4fe5SjMRMXX37zNQG32HNZ6ZaRzHk%2Bk5hwcw0pmXmrP1esx5W1hyHmbWzp%2BemNS4rJ9k2%2BHq2DP%2FVsQaDWduVJUt1%2F0MwY8wT2s9pilIyGu0WbzGrMWQ5N6FjcXPSk0vkDhazyzcGR3JE68fHWXo7G8kqNf1eZ67UVg2zyCSWeVLXDwqw1oN01Dgyjf%2BKTe2bSCL0kwV0ajp9H%2B4VQnwyM0992SVL5ri2ymLRr3fE5rGM2mXNiZ%2FX0SPBXJalSR2MXlPSgV2Abdk8%2FGlYfDbXP3GHZoL5yHyev2c%2BD%2F9xEj6f6xkm4%2FOZJjENFMcrH8HzEcmbDRPJs6yqlHwE8nLpZeNDmX7FiZ3sGj8f7Ww83%2F32n9um%2Bsaj35cr3%2BYc6pFVPiJZXHoTn9B%2BRMvPNxSYfwX4DB1MpLBSepBQD89jJMyjbmtkJsW7YUbqutjVmjpqWrw2juyVq1d0GUE8eRXN8e6VX6ALcIt%2FAA%3D%3D)


## Authors:
This program is written and maintained by **Mary Gomez** (mary.gomez@holbertonschool.com) and **Diego A. Alarcón V.** (1153@holbertonshool.com)


