// Return the number (count) of vowels in the given string.

// We will consider a, e, i, o, u as vowels for this Kata (but not y).

// The input string will only consist of lower case letters and/or spaces.

function getCount(str) {
    let vowels = 'aeiou';
    let count = 0;
    let strArray = str.replace(" ", "").split("");
    for(let i=0;i<strArray.length;i++){
        if(vowels.includes(strArray[i]))
        {
            count++;
        }
    }
    return count;
  }
