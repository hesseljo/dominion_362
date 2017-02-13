/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import junit.framework.TestCase;


/**
 * Performs Validation Test for url validations.
 *
 * @version $Revision: 1128446 $ $Date: 2011-05-27 13:29:27 -0700 (Fri, 27 May 2011) $
 */
public class UrlValidatorTest extends TestCase {

   //private boolean printStatus = false;
   //private boolean printIndex = false; //print index that indicates current scheme,host,port,path, query test were using.

   private String [] unitTestList = { "https://www.nytimes.com/",
		   "https://news.google.com/",
		   "http://www.cnn.com/",
		   "http://www.foxnews.com/",
		   "http://www.huffingtonpost.com/",
		   "http://www.drudgereport.com/"		   
   };

   public UrlValidatorTest(String testName) {
      super(testName);
   }

   public void testManualTest()
   {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("Manual Unit Tests: ");
	  
	   // Expected Valid URL's
	   System.out.println("manual valid: " + urlVal.isValid("http://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("ftp://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("h3t://www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("www.google.com"));
	   System.out.println("manual valid: " + urlVal.isValid("http://www.google.com/page123"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com/#q=url"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com/#q=valid+urls"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com:80"));
	   System.out.println("manual valid: " + urlVal.isValid("https://www.google.com:80/"));
	   System.out.println("manual valid: " + urlVal.isValid("https://255.255.255.255")); 
	   System.out.println("manual valid: " + urlVal.isValid("255.255.255.255")); 
	   System.out.println("manual valid: " + urlVal.isValid("https://go.cc:80/test1")); 
	   
	   // Expected Invalid URL's
	   System.out.println("manual invalid: " + urlVal.isValid("3ht://www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("http:/www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("http:www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("http/www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("://www.google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("www.google.c"));
	   System.out.println("manual invalid: " + urlVal.isValid("google.com"));
	   System.out.println("manual invalid: " + urlVal.isValid("http"));
	   System.out.println("manual invalid: " + urlVal.isValid("http://"));
	   System.out.println("manual invalid: " + urlVal.isValid("google"));
	   System.out.println("manual invalid: " + urlVal.isValid("google.com/?=123"));
	   System.out.println("manual invalid: " + urlVal.isValid("http://www.google.com:80/../"));
	   System.out.println("manual invalid: " + urlVal.isValid("http/go.a:65a?action=edit&mode=up"));
	   System.out.println("manual invalid: " + urlVal.isValid("http/go.a:65a/test1//file?action=edit&mode=up"));
	   System.out.println("manual invalid: " + urlVal.isValid("://go.a1a:65a"));
	   System.out.println("manual invalid: " + urlVal.isValid("256.256.256.256"));
	   System.out.println("");
   }
   
   //Second, come up with good input partitioning. Try to provide a varying set of inputs that partition the overall input set well. 
   //Did you find any failures? You can call valid method once or more for each partition. (3 points)
   // Partition by the components of URL =  scheme + authority + port + path + query

   public void testYourFirstPartition() {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("First Partition: URL Scheme");

	   System.out.println("valid scheme = true:  " + urlVal.isValid("http://www.google.com")); 
	   System.out.println("valid scheme = true:  " + urlVal.isValid("https://www.google.com"));
	   System.out.println("valid scheme = true:  " + urlVal.isValid("h3t://www.google.com"));
	   System.out.println("valid scheme = true:  " + urlVal.isValid("ftp://www.google.com"));
	   System.out.println("valid scheme = true:  " + urlVal.isValid("www.google.com"));				//bug here = does not account for http://

	   System.out.println("invalid scheme = false: " + urlVal.isValid("3ht://www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("http:/www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("http:www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("http.www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("http//www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("http/www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid("://www.google.com")); 
	   System.out.println("invalid scheme = false: " + urlVal.isValid(":/www.google.com"));    
	   System.out.println("");
   }
   
   public void testYourSecondPartition() {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("Second Partition: URL Authority");

	   System.out.println("valid authority = true: " + urlVal.isValid("http://www.google.com")); 	
	   System.out.println("valid authority = true: " + urlVal.isValid("http://go.com")); 
	   System.out.println("valid authority = true: " + urlVal.isValid("http://go.au")); 
	   System.out.println("valid authority = true: " + urlVal.isValid("http://go.cc")); 
	   System.out.println("valid authority = true: " + urlVal.isValid("http://0.0.0.0")); 
	   System.out.println("valid authority = true: " + urlVal.isValid("http://255.255.255.255")); 
	   System.out.println("valid authority = true: " + urlVal.isValid("http://255.com")); 
       
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://256.256.256.256")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://999.999.999.999")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://1000.999.999.999")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://1.2.3.4.5")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://1.2.3.4.")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://255.255..")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://.255.255.255.255")); 
	   System.out.println("invalid authority = false: " + urlVal.isValid("http://")); 
	   System.out.println("");
   }
   
   public void testYourThirdPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("Third Partition: URL Port");

       System.out.println("valid port = true: " + urlVal.isValid("http://www.google.com:1000")); 
       System.out.println("valid port = true: " + urlVal.isValid("http://www.google.com:999")); 
       System.out.println("valid port = true: " + urlVal.isValid("http://www.google.com:80")); 
       System.out.println("valid port = true: " + urlVal.isValid("http://www.google.com:0")); 
       System.out.println("valid port = true: " + urlVal.isValid("http://www.google.com:65535")); 

       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:100000.000")); 
       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:")); 
       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:-1")); 
       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:abc")); 
       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:80a")); 
       System.out.println("invalid port = false: " + urlVal.isValid("http://www.google.com:8.0")); 
	   System.out.println("");
   }

   public void testYourFourthPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("Fourth Partition: URL Path");
	   
       System.out.println("valid path = true: " + urlVal.isValid("http://www.google.com/maps")); 
       System.out.println("valid path = true: " + urlVal.isValid("http://www.google.com/test")); 
       System.out.println("valid path = true: " + urlVal.isValid("http://www.google.com/404")); 
       System.out.println("valid path = true: " + urlVal.isValid("http://www.google.com/$404")); 
 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/..")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/../")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/../file1")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/$~!^(!#[3")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/maps/..baps")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/maps/baps/..slaps")); 
       System.out.println("invalid path = false: " + urlVal.isValid("http://www.google.com/maps/moremaps/#../mymaps"));
	   System.out.println("");
   }

   public void testYourFifthPartition() {
       UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println("Fifth Partition: URL Query");

	   System.out.println("valid query = true: " + urlVal.isValid("http://www.google.com/something?id=1000")); 
	   System.out.println("valid query = true: " + urlVal.isValid("http://www.google.com/webhp?sourceid=chrome-instant&ion=1&espv=2&ie=UTF-8#q=foo%20bar")); 
	   System.out.println("valid query = true: " + urlVal.isValid("http://www.google.com/?q=foo%20bar")); 
	   System.out.println("valid query = true: " + urlVal.isValid("http://www.google.com/?id=foo+bar#q=foo+bar")); 
	   System.out.println("valid query = true: " + urlVal.isValid("http://www.google.com/?action=view")); 
 
	   System.out.println("invalid query = false: " + urlVal.isValid("http://www.google.com/something*id=1000")); 
	   System.out.println("invalid query = false: " + urlVal.isValid("http://www.google.com/m?yquery=1000")); 
	   System.out.println("invalid query = false: " + urlVal.isValid("http://www.google.com/?##!=1000"));  
	   System.out.println("");
   }
   
   //Third, do programming based testing. Write few unit test cases. You can have some sort of loop in your unit test and test different url 
   //with each instance of loop. Something very similar to testIsValid() but your own logic and idea. 
   //Even a single test will be sufficient if you write it like testIsValid() method. Did you find any failures? 
   //Submit your test files and test cases as part of your work under your onid/URLValidator folder.   (5 points)
   public void testIsValid()
   {
	   System.out.println("Programming Based Unit Test: ");
	   for (int i = 0; i < unitTestList.length; i++ ) {
		   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		   System.out.println("testIsValid: " + urlVal.isValid(unitTestList[i]));
	   }
	   System.out.println("");
   }
   
   public void testAnyOtherUnitTest()
   {
	   
	   
	   
   }
   /**
    * Create set of tests by taking the testUrlXXX arrays and
    * running through all possible permutations of their combinations.
    *
    * @param testObjects Used to create a url.
    */
   

}
