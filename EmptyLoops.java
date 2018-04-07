import java.time.Duration;
import java.time.Instant;
class EmptyLoops {
    public static void main(String [] args) {
        System.out.println("Empty Loops in java");
        int a = 10;
        for (int i = 1; i < 13; i++) {
            Instant start = Instant.now();
            for (int j = 0; j < a; j++) {
                
            }
            Instant end = Instant.now();
            Duration timeElapsed = Duration.between(start, end);
            if (timeElapsed.getSeconds() < 0) {
                System.out.println("10^"+i+" took "+ timeElapsed.toNanos() +" ms");
            } else {
                System.out.println("10^"+i+" took "+ timeElapsed.getSeconds() +" s");
            }
            
            a *= 10;
        }
    }
}