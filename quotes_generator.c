#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int r;
	char category;
	redo:
	printf("\n  QUOTES CATEGORIES  \n1. funny -'a'\n2. gratitude -'b'\n3. love -'c'\n4. friendship -'d'\n6. family -'e'\n7. motivational -'f'\n8. stop-'g'\n");
    scanf(" %c",&category);
	srand(time(NULL));
	r=(rand() %10)+1;
	switch(category)
	{
		case 'a':
			if (r==1)
			{
				printf("\"I'm writing a book. I've got the page numbers done.\" - Steven Wright\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"Someone asked me, if I were stranded on a desert island what book would I bring: 'How to Build a Boat.'\"-Steven Wright\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"There is no sunrise so beautiful that it is worth waking me up to see it.\"-Mindy Kaling,Is Everyone Hanging Out Without Me?\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"I'm not a vegetarian because I love animals. I'm a vegetarian because I hate plants.\" - A. Whitney Brown\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"I'm so good at sleeping I can do it with my eyes closed\"-Unknown\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"When I die, I want to go peacefully like my Grandfather did, in his sleep, not screaming, like the passengers in his car\"-Unknown\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"Life is too short to be serious all the time So, if you can't laugh at yourself, call me- I'll laugh at you\"-Unknown\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"Work is the greatest thing in the world, so we should always save some of it for tomorrow.\" - Don Herold\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"Life is like a box of chocolates; you never know what you're gonna get\" - Forrest Gump\n");
			    goto redo;
			}	
			else 
			{
				printf("\"I'm writing a book about reverse psychology. Please don't read it.\" - Anonymous\n");
				goto redo;
			}
			break;
		case 'b': 
		    if (r==1)
			{
				printf("John F. Kennedy-\"As we express our gratitude, we must never forget that the highest appreciation is not to utter words, but to live by them.\"\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"Gratitude is a powerful catalyst for happiness It's the spark that lights a fire of joy in your soul\" - Anonymous\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"Gratitude is the mother of all virtues\"-Cicero\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"No one who achieves success does so without the help of others. The wise and confident acknowledge this help with gratitude.\"- Alfred North Whitehead\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"In ordinary life, we hardly realize that we receive a great deal more than we give, and that it is only with gratitude that life becomes rich.\" - Dietrich Bonhoeffer\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"Gratitude is when memory is stored in the heart and not in the mind.\" - Lionel Hampton\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"When I started counting my blessings, my whole life turned around.\" - Willie Nelson\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"You cannot do a kindness too soon because you never know how soon it will be too late.\" - Ralph Waldo Emerson\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"Gratitude makes sense of our past, brings peace for today, and creates a vision for tomorrow.\" - Melody Beattie\n");
			    goto redo;
			}	
			else 
			{
				printf("\"The more you are in a state of gratitude, the more you will attract things to be grateful for.\" - Walt Disney\n");
				goto redo;
			}
			break;
		case 'c':
			if (r==1)
			{
				printf("\"To love and be loved is to feel the sun from both sides.\" - David Viscott\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"The best and most beautiful things in the world cannot be seen or even touched. They must be felt with the heart.\" - Helen Keller\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"Love is an act of endless forgiveness. Forgiveness is the key to action and freedom.\" - William Blake\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"Love is like the wind, you can't see it but you can feel it\"- Nicholas Sparks\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"The best thing to hold onto in life is each other\" - Audrey Hepburn\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"Love is the answer, and you know that for sure; Love is a flower, you've got to let it grow.\" - John Lennon\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"In all the world, there is no heart for me like yours. In all the world, there is no love for you like mine.\"- Maya Angelou\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"So, I love you because the entire universe conspired to help me find you.\" - Paulo Coelho\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"Self-love, my liege, is not so vile a sin, as self-neglecting.\" - William Shakespear\n");
			    goto redo;
			}	
			else 
			{
				printf("\"I have decided to stick to love; hate is too great a burden to bear.\" - Martin Luther King, Jr.\n");
				goto redo;
			}
			break;
		case 'd':
			if (r==1)
			{
				printf("\"A friend is someone who knows all about you and still loves you\"-Elbert Hubbard\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"A real friend is one who walks in when the rest of the world walks out\" - Walter Winchell\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"A true friend reaches for your hand but touches your heart\" - Unknown\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"A true friend is the greatest of all blessings and the one that we take the least thought of all to acquire.\" - François de La Rochefoucauld\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"Friendship is the golden thread that ties the heart of all the world.\" - John Evelyn\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"In the sweetness of friendship let there be laughter and sharing of pleasures. For in the dew of little things, the heart finds its morning and is refreshed.\" - Khalil Gibran\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"Friendship is the shadow of the evening, which strengthens with the setting sun of life.\" - Jean de La Fontaine\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"A single rose can be my garden... a single friend, my world.\" - Leo Buscaglia\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"Life is an ugly, awful place to not have a best friend.\" - Sarah Dessen\n");
			    goto redo;
			}	
			else 
			{
				printf("\"Some people go to priests; others to poetry; I to my friends.\" - Virginia Woolf\n");
				goto redo;
			}
			break;
		case 'e':
			if (r==1)
			{
				printf("\"Family is where life begins and love never ends.\" - Unknown\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"Family is the anchor that holds us through life's storms.\" - Unknown\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"A happy family is but an earlier heaven.\" - George Bernard Shaw\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"You don't choose your family. They are God's gift to you, as you are to them.\" -Desmond Tutu\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"The family is the first essential cell of human society.\" - Pope John XXIII\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"Think of your family today and every day thereafter, don't let the busy world of today keep you from showing how much you love and appreciate your family.\" -Josiah\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"Ohana means family and family means nobody gets left behind or forgotten.\" -Stitch\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"Life is beautiful. It's about giving. It's about family.\" -Walt Disney\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"This is my family. I found it all on my own. It's little, and broken, but still good. Yeah. Still good.\" -Stitch\n");
			    goto redo;
			}	
			else 
			{
				printf("\"The family is one of nature's masterpieces.\" - George Santayana\n");
				goto redo;
			}
			break;
		case 'f':
			if (r==1)
			{
				printf("\"Success is not final, failure is not fatal; it is the courage to continue that counts\" - Winston Churchill\n");
				goto redo;
			}	
			else if (r==2)
			{
				printf("\"Do one thing every day that scares you\" - Eleanor Roosevelt\n");
			    goto redo;
			}
			else if (r==3)
			{
				printf("\"The only way to do great work is to love what you do.\" - Steve Jobs\n");
			    goto redo;
			}
			else if (r==4)
			{
				printf("\"The future depends on what you do today.\" - Mahatma Gandhi\n");
			    goto redo;
			}
			else if (r==5)
			{
				printf("\"You are never too old to set another goal or to dream a new dream.\" - C.S. Lewis\n");
			    goto redo;
			}
			else if (r==6)
			{
				printf("\"What you get by achieving your goals is not as important as what you become by achieving your goals.\" - Zig Ziglar\n");
			    goto redo;
			}
			else if (r==7)
			{
				printf("\"The only person you are destined to become is the person you decide to be.\" - Ralph Waldo Emerson\n");
			    goto redo;
			}	
			else if (r==8)
			{
				printf("\"The only thing standing between you and your goal is the story you keep telling yourself as to why you can't achieve it.\" - Jordan Belfort\n");
			    goto redo;
			}
			else if (r==9)
			{
				printf("\"It does not matter how slowly you go as long as you do not stop.\" - Confucius\n");
			    goto redo;
			}	
			else 
			{
				printf("\"The secret of getting ahead is getting started.\" - Mark Twain\n");
				goto redo;
			}
			break;
		case 'g':
			printf("thank you!");
			break;
		default:
			printf("wrong input! try again\n");
			goto redo;
			break;
		return 0;
	}
}

