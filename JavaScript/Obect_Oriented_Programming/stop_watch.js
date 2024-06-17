function Stopwatch() {
    /*Private variables*/
    let startTime, endTime, running, duration = 0;
  
    /*Method to start the stopwatch*/
    this.start = function() {
      if (running) {
        throw new Error('Stopwatch has already started.');
      }
      running = true;
      startTime = new Date();
    };
  
    /*Method to stop the stopwatch*/
    this.stop = function() {
      if (!running) {
        throw new Error('Stopwatch is not started.');
      }
      running = false;
      endTime = new Date();
  
      /*Calculate the duration in seconds and add to the total duration*/
      const seconds = (endTime.getTime() - startTime.getTime()) / 1000;
      duration += seconds;
    };
  
    /*Method to reset the stopwatch*/
    this.reset = function() {
      startTime = null;
      endTime = null;
      running = false;
      duration = 0;
    };
  
    /*Read-only property to get the duration*/
    Object.defineProperty(this, 'duration', {
      get: function() { return duration; }
    });
  }
  
  /*Create a new stopwatch instance*/
  const sw = new Stopwatch();