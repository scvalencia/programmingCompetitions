public class TimeMeasure {
	/** Use as 
	 * 	TimeMeasure timer = new TimeMeasure();
	 *  task();
	 *  double time = timer.elapsedTime();
	 *  System.out.println(time);
	 */
	private final long start;
	
	public TimeMeasure() {
		start = System.currentTimeMillis();
	}
	
	public double elapsedTime() {
		long now = System.currentTimeMillis();
		return (start - now)/1000.0;
	}
}
