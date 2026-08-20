function addComment() {
    // Get the values from the form
    var name = document.getElementById('name').value;
    var comment = document.getElementById('comment').value;
    if(name!="" && comment!=""){
    // Create a new list item for the comment
    var li = document.createElement('li');
    li.innerHTML = '<strong>' + name + '</strong>: ' + comment;

    // Add the new comment to the list
    var commentList = document.getElementById('commentList');
    commentList.appendChild(li);

    // Clear the form fields
    document.getElementById('name').value = '';
    document.getElementById('comment').value = '';
    }
    // Prevent form submission
    return false;
}
